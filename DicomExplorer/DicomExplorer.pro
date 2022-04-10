QT       += core gui widgets svg

CONFIG += c++17

DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

include($$PWD/../ThirdParty/GDCM.pri)

PRECOMPILED_HEADER = stdafx.h

SOURCES += \
    SearchModel.cpp \
    TreeItem.cpp \
    TreeModel.cpp \
    main.cpp \
    DicomExplorer.cpp \
    DicomHelper.cpp

HEADERS += \
    DicomExplorer.h \
    DicomHelper.h \
    SearchModel.h \
    TreeItem.h \
    TreeModel.h \
    Version.h

FORMS += \
    DicomExplorer.ui

RESOURCES += \
    DicomExplorer.qrc

RC_FILE = DicomExplorer.rc

OTHER_FILES += DicomExplorer.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
