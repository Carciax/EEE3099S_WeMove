#ifndef RTW_HEADER_iv_DetectObject_h_
#define RTW_HEADER_iv_DetectObject_h_
#ifndef iv_DetectObject_COMMON_INCLUDES_
#define iv_DetectObject_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "slexec_parallel.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "iv_DetectObject_types.h"
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME iv_DetectObject
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (37) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int32_T dpx4b1tifg ; uint32_T jblghem2vo ; uint8_T
pya3jbutrr ; boolean_T nnsvnkqyjy ; } jpdsxlyeah ; typedef struct { uint32_T
mrjx3dkhpv ; } lto3kxarq3b ; typedef struct { real_T a5xinuasmi [ 199 ] ;
real32_T i1paemfyy5 [ 199 ] ; } e5o5xgirei ; typedef struct { int32_T
h2z0k43iei ; uint8_T hvszrpwqhg ; boolean_T hwqj4kmtdf ; lto3kxarq3b
nnxbi4fgqg [ 199 ] ; } lto3kxarq3 ; typedef struct { real_T ji00wv3014 ;
real_T decjdihxcw ; real_T gz1dfa42lu ; real_T ditq055ebh ; real_T iylpq3hghr
; real_T bdnigyvsyn ; real_T kbohsqzdeb ; real_T gqsc4yxprh [ 4 ] ; real_T
jz52v00tr3 ; real_T jwdxaqf2qz ; real_T jswowza1d4 ; real_T peqplb45u4 ;
real_T aj2jxy1h1h ; real_T hylamboxo5 ; real_T bomtjdim42 ; real_T b5nsh0zsui
; real_T cuccgthc4o ; real_T pnvlipz4jm ; real_T lw52j1u5b3 ; real_T
ne2ywir1gp ; real_T a34al3yjl2 ; real_T ph2pcx1thu ; real_T bmf1pvrpw0 ;
real_T hrtlirekve ; real_T nwywsnx52p ; real_T g4h00jrxug [ 9 ] ; real_T
b3j2perezy ; real_T mgh0bzr53e ; real_T bvsyqq0avh ; real_T ect0113fcp ;
real_T l05rkglauf ; real32_T px2fcnrkgv [ 4 ] ; e5o5xgirei nnxbi4fgqg [ 1 ] ;
} B ; typedef struct { real_T onlvei224w ; real_T jkf3nm3nbv ; real_T
cquyyzdzbt ; real_T lrnmt0mvw5 ; real_T bie05bd4ab ; real_T ni53pjisvf ;
real_T b4bqgf4dhw ; real_T ihgcj0rg1c ; real_T nqo0sx2y20 [ 3 ] ; real_T
n0rkvty3rm ; real_T mtncgxqpgg [ 3 ] ; real_T eenjimbo4a ; real_T bduxriqlxu
; real_T iuwdeh0o2d [ 60 ] ; real_T hqps1swkf5 ; real_T l4jjy24ze2 ; real_T
pd4jg1jyod ; real_T mhy0fuih2h ; real_T gpyrvqffs3 ; real_T bjswwe2xbu ;
real_T gtn1wjmrwt ; real_T iesem4g5ze ; real_T glgpemjeyx ; real_T kftjrjvgit
; real_T fqvgstrkfl ; real_T cl001iwg3i ; struct { void * AQHandles ; }
mzbp2gbupe ; int32_T jhqzz2bves ; int32_T lyqqvkmpdn ; int32_T nfrpqyqicb ;
int32_T kxqwml5tfx ; int32_T jxpofb2f25 ; int32_T mdgfrwm0ue ; uint32_T
drdk50ofrw ; uint32_T ho0sx3ydv5 ; uint32_T nerakhrzb5 ; uint8_T j0b02r3oov ;
uint8_T a4woko0313 ; uint8_T fhtms5vxtb ; uint8_T gcbmowb40i ; uint8_T
lb2eprmj4o ; boolean_T gfj34s4ecr ; boolean_T lslyhe01co ; lto3kxarq3
nnxbi4fgqg [ 1 ] ; jpdsxlyeah fmtja5mwec [ 4 ] ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct gvf13cas0y_ { real_T
Gain1_Gain ; real_T Bias_Bias ; real_T Gain_Gain ; real_T Bias1_Bias ; real_T
Saturation2_UpperSat ; real_T Saturation2_LowerSat ; real_T
Saturation3_UpperSat ; real_T Saturation3_LowerSat ; real_T Constant_Value ;
real32_T DirectLookupTablenD_table [ 791911 ] ; uint8_T
DirectLookupTablenD_DiagnosticForOutOfRangeInput ; } ; struct j3itycpy2js_ {
real_T Gain1_Gain ; real_T Bias_Bias ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Gain_Gain ; real_T Bias1_Bias ; real_T
Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T Constant_Value ;
real_T Constant1_Value ; real32_T DirectLookupTablenD_table [ 791911 ] ;
uint8_T DirectLookupTablenD_DiagnosticForOutOfRangeInput ; } ; struct
j3itycpy2j_ { real_T Constant_Value [ 199 ] ; j3itycpy2js nnxbi4fgqg ; } ;
struct P_ { real_T InputPWM [ 173 ] ; real_T WheelSpeed [ 173 ] ; real_T
axleLength ; real_T lineLength ; real_T ticksPerRot ; real_T wheelR ; real_T
Difference_ICPrevInput ; real_T LineSensor_envVal ; real_T LineSensor_lineVal
; real_T LeftMotor_sensorType ; real_T RightMotor_sensorType ; real_T
RobotSimulator_startTheta ; real_T RobotSimulator_startX ; real_T
RobotSimulator_startY ; real_T Towlwr_wheelR ; real_T Gain_Gain ; real_T
Gain_Gain_o4hmcpr5ca ; real_T DiscreteTimeIntegrator_gainval ; real_T
DiscreteTimeIntegrator_IC ; real_T DiscreteTimeIntegrator1_gainval ; real_T
DiscreteTimeIntegrator1_IC ; real_T DiscreteTimeIntegrator_gainval_lzyl4k4zxv
; real_T DiscreteTimeIntegrator_IC_f5z3vyriqm ; real_T
DiscreteTimeIntegrator1_gainval_fz4ugw3les ; real_T
DiscreteTimeIntegrator1_IC_ervpavkjfk ; real_T Multiply2_Gain ; real_T
Multiply5_Gain ; real_T DiscreteTimeIntegrator_gainval_lipa2hzbkc ; real_T
DiscreteTimeIntegrator1_gainval_goiftktzjh ; real_T
DiscreteTimeIntegrator2_gainval ; real_T Multiply1_Gain ; real_T
DiscreteTimeIntegrator_gainval_afikqgzpe0 ; real_T
DiscreteTimeIntegrator_IC_i43ho510i4 ; real_T Internal_A [ 9 ] ; real_T
Internal_B [ 3 ] ; real_T Internal_C [ 3 ] ; real_T Switch_Threshold ; real_T
DiscreteTimeIntegrator_gainval_ptlrlhszmg ; real_T
DiscreteTimeIntegrator_IC_e3x2ks5ohu ; real_T Internal_A_avp5ztxxzl [ 9 ] ;
real_T Internal_B_ebkdikdi50 [ 3 ] ; real_T Internal_C_hiyczu5j42 [ 3 ] ;
real_T Switch_Threshold_bmwdvzwwf2 ; real_T SoftRealTime_P1_Size [ 2 ] ;
real_T SoftRealTime_P1 ; real_T Multiply_Gain ; real_T Gain2_Gain ; real_T
Gain3_Gain ; real_T changeparameters_Gain [ 4 ] ; real_T Circle_Value ;
real_T Gain1_Gain ; real_T Constant_Value [ 4 ] ; real_T Constant1_Value [ 4
] ; real_T Constant1_Value_bemiwsq1ta ; real_T Multiply_Gain_odfbensap2 ;
real_T Constant_Value_bw3epovpb1 ; real_T Constant_Value_e2utgdqno3 ; real_T
Constant1_Value_bv54zl0zqv ; real32_T Switch_Threshold_jhitgx5agm ;
j3itycpy2j nnxbi4fgqg ; gvf13cas0y fmtja5mwec ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_iv_DetectObject_GetDWork ( ) ; extern void
mr_iv_DetectObject_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_iv_DetectObject_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * iv_DetectObject_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
