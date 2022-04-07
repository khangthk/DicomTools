#pragma once

#define VER_FILEVERSION             1,0,0,0
#define VER_FILEVERSION_STR         "1.0.0.0"

#define VER_PRODUCTVERSION          1,0,0,0
#define VER_PRODUCTVERSION_STR      "1.0.0.0"

#define VER_FILEFLAGSMASK           VS_FFI_FILEFLAGSMASK

#ifdef _DEBUG
#define VER_FILEFLAGS               VS_FF_DEBUG
#else
#define VER_FILEFLAGS               0x0L
#endif

#define VER_FILEOS                  VOS_NT_WINDOWS32
#define VER_FILETYPE                VFT_APP
#define VER_FILESUBTYPE             VFT2_UNKNOWN

#define VER_COMPANYNAME_STR         "Med-Aid"
#define VER_FILEDESCRIPTION_STR     "Dicom Explorer"
#define VER_INTERNALNAME_STR        "DicomExplorer.exe"
#define VER_LEGALCOPYRIGHT_STR      "Copyright \251 2022"
#define VER_ORIGINALFILENAME_STR    "DicomExplorer.exe"
#define VER_PRODUCTNAME_STR         "Dicom Explorer"
#define VER_LEGALTRADEMARKS_STR     ""
