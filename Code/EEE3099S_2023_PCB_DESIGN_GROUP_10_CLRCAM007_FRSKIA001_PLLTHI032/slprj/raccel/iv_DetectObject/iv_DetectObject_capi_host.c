#include "iv_DetectObject_capi_host.h"
static iv_DetectObject_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        iv_DetectObject_host_InitializeDataMapInfo(&(root), "iv_DetectObject");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
