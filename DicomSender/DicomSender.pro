QT       += core gui widgets svg

CONFIG += c++17

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

include($$PWD/../ThirdParty/GDCM.pri)

PRECOMPILED_HEADER = stdafx.h

SOURCES += \
    Echo.cpp \
    Scan.cpp \
    Setting.cpp \
    Store.cpp \
    main.cpp \
    DicomSender.cpp

HEADERS += \
    DicomSender.h \
    Echo.h \
    Scan.h \
    Setting.h \
    Store.h \
    Version.h

FORMS += \
    DicomSender.ui

RESOURCES += \
    DicomSender.qrc

RC_FILE = DicomSender.rc

OTHER_FILES += DicomSender.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


