#include "stdafx.h"
#include "Echo.h"

#include <gdcmAttribute.h>
#include <gdcmULConnectionManager.h>
#include <gdcmPresentationContextGenerator.h>

using namespace gdcm;

Echo::Echo(const QString& host /*= "localhost"*/, uint16_t port /*= 104*/,
           const QString& local /*= "AE"*/, const QString& target /*= "AE"*/)
  : m_host(host), m_port(port), m_local(local), m_target(target)
{
}

Echo::~Echo()
{
  qDebug() << "~Echo";
}

void Echo::run()
{
  // Generate the PresentationContext array from the echo UID
  PresentationContextGenerator generator;
  if (!generator.GenerateFromUID(UIDs::VerificationSOPClass))
  {
    emit log("[ECHO] Failed to generate presentation context");
    emit result(false);
    return;
  }

  network::ULConnectionManager theManager;
  if (!theManager.EstablishConnection(m_local.toStdString(),
                                      m_target.toStdString(),
                                      m_host.toStdString(),
                                      0,
                                      m_port,
                                      1000,
                                      generator.GetPresentationContexts()))
  {
    emit log("[ECHO] Failed to establish connection");
    emit result(false);
    return;
  }

  std::vector<network::PresentationDataValue> theValues = theManager.SendEcho();

  theManager.BreakConnection(-1); // wait for a while for the connection to break, ie, infinite

  // Check the Success Status
  DataSet ds = network::PresentationDataValue::ConcatenatePDVBlobs(theValues);
  Attribute<0x0, 0x0900> at;
  if (ds.FindDataElement(at.GetTag()))
  {
    at.SetFromDataSet(ds);
    if (at.GetValue() != 0)
    {
      emit log("[ECHO] Wrong value for Status (C-ECHO)");
      emit result(false);
      return;
    }

    emit log("[ECHO] Succeeded");
    emit result(true);
    return;
  }

  emit log("[ECHO] Empty return on C-ECHO (no Status)");
  emit result(false);
  return;
}
