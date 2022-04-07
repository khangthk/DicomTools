DEBUG_DIR = .
win32:CONFIG(debug, debug|release): DEBUG_DIR = debug

LIB_PATH = $$PWD/../ThirdParty/GDCM/$${DEBUG_DIR}/lib
HEADER_PATH = $$PWD/../ThirdParty/GDCM/include/gdcm

QMAKE_LFLAGS += /ignore:4099

INCLUDEPATH += $${HEADER_PATH}
DEPENDPATH += $${HEADER_PATH}

LIBS += -L$${LIB_PATH} -lgdcmCommon -lgdcmDICT -lgdcmDSED -lgdcmIOD -lgdcmMEXD -lgdcmMSFF \
        -lgdcmcharls -lgdcmexpat -lgdcmjpeg12 -lgdcmjpeg16 -lgdcmjpeg8 -lgdcmopenjp2 -lgdcmzlib -lsocketxx \
        -lcrypt32 -lrpcrt4 -lws2_32

PRE_TARGETDEPS += $${LIB_PATH}/gdcmCommon.lib \
                  $${LIB_PATH}/gdcmDICT.lib \
                  $${LIB_PATH}/gdcmDSED.lib \
                  $${LIB_PATH}/gdcmIOD.lib \
                  $${LIB_PATH}/gdcmMEXD.lib \
                  $${LIB_PATH}/gdcmMSFF.lib \
                  $${LIB_PATH}/gdcmcharls.lib \
                  $${LIB_PATH}/gdcmexpat.lib \
                  $${LIB_PATH}/gdcmjpeg12.lib \
                  $${LIB_PATH}/gdcmjpeg16.lib \
                  $${LIB_PATH}/gdcmjpeg8.lib \
                  $${LIB_PATH}/gdcmopenjp2.lib \
                  $${LIB_PATH}/gdcmzlib.lib \
                  $${LIB_PATH}/socketxx.lib
