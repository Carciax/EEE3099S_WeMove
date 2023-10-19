#include "iv_DetectObject.h"
#include "rtwtypes.h"
#include "iv_DetectObject_private.h"
#include <string.h>
#include "mwmathutil.h"
#include "rt_logging_mmi.h"
#include "iv_DetectObject_capi.h"
#include "iv_DetectObject_dt.h"
#include "sfcn_loader_c_api.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "10.7 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define hn1xofmrmi (-1)
#define arfvqpq2pa (3U)
#define dnffvl5ycp (1U)
#define e2sfl1qpe3 ((uint8_T)0U)
#define fcnnmqgwfi (2U)
#define fportvbopf (4U)
#define ij3oeqmyen (-1)
#define kyrq00ztl1 (7U)
#define mgyi5nfq4k (6U)
#define nabcdnqvbi (5U)
#define dde2u51qaz (1U)
#define cnm1w1amck (3U)
#define h3v0w0dbjg (5U)
#define j4j5wvcstg (6U)
#define ll00kim3ft (4U)
#define or0q0vdcve (1U)
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; uint32_T plook_u32d_binckan ( real_T u , const real_T bp [ ] ,
uint32_T maxIndex ) { uint32_T bpIndex ; if ( u <= bp [ 0U ] ) { bpIndex = 0U
; } else if ( u < bp [ maxIndex ] ) { bpIndex = binsearch_u32d ( u , bp ,
maxIndex >> 1U , maxIndex ) ; if ( ( bpIndex < maxIndex ) && ( bp [ bpIndex +
1U ] - u <= u - bp [ bpIndex ] ) ) { bpIndex ++ ; } } else { bpIndex =
maxIndex ; } return bpIndex ; } uint32_T binsearch_u32d ( real_T u , const
real_T bp [ ] , uint32_T startIndex , uint32_T maxIndex ) { uint32_T bpIdx ;
uint32_T bpIndex ; uint32_T iRght ; bpIdx = startIndex ; bpIndex = 0U ; iRght
= maxIndex ; while ( iRght - bpIndex > 1U ) { if ( u < bp [ bpIdx ] ) { iRght
= bpIdx ; } else { bpIndex = bpIdx ; } bpIdx = ( iRght + bpIndex ) >> 1U ; }
return bpIndex ; } void c1fpuwcsi3 ( void ) { int32_T hgqywfela5 ; for (
hgqywfela5 = 0 ; hgqywfela5 < 4 ; hgqywfela5 ++ ) { rtDW . fmtja5mwec [
hgqywfela5 ] . dpx4b1tifg = hn1xofmrmi ; rtDW . fmtja5mwec [ hgqywfela5 ] .
pya3jbutrr = 0U ; } } void icltubuh34 ( void ) { int32_T hgqywfela5 ; for (
hgqywfela5 = 0 ; hgqywfela5 < 4 ; hgqywfela5 ++ ) { rtDW . fmtja5mwec [
hgqywfela5 ] . jblghem2vo = 0U ; } } void j0agmexpcb ( int32_T hgqywfela5 ) {
real_T ee42suviov ; real_T kq3dk4n0sb ; real32_T coy3ecddge ; ee42suviov =
rtP . Constant_Value [ hgqywfela5 ] ; kq3dk4n0sb = rtP . Constant1_Value [
hgqywfela5 ] ; { real_T tmp_p [ 9 ] ; real_T transPt [ 3 ] ; real_T
hminu0tb2o ; real_T lnxpicup03 ; real_T tmp ; int32_T i ; SimStruct * S ;
void * diag ; rtDW . fmtja5mwec [ hgqywfela5 ] . dpx4b1tifg = hn1xofmrmi ;
tmp_p [ 0 ] = muDoubleScalarCos ( rtB . kbohsqzdeb ) ; tmp_p [ 3 ] = -
muDoubleScalarSin ( rtB . kbohsqzdeb ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1 ] =
muDoubleScalarSin ( rtB . kbohsqzdeb ) ; tmp_p [ 4 ] = muDoubleScalarCos (
rtB . kbohsqzdeb ) ; tmp_p [ 7 ] = 0.0 ; tmp_p [ 2 ] = 0.0 ; tmp_p [ 5 ] =
0.0 ; tmp_p [ 8 ] = 1.0 ; for ( i = 0 ; i < 3 ; i ++ ) { transPt [ i ] =
tmp_p [ i + 3 ] * kq3dk4n0sb + tmp_p [ i ] * ee42suviov ; } hminu0tb2o =
muDoubleScalarRound ( rtP . fmtja5mwec . Constant_Value - ( rtB . bdnigyvsyn
+ transPt [ 1 ] ) * rtP . fmtja5mwec . Gain1_Gain ) + rtP . fmtja5mwec .
Bias_Bias ; if ( hminu0tb2o > rtP . fmtja5mwec . Saturation2_UpperSat ) {
hminu0tb2o = rtP . fmtja5mwec . Saturation2_UpperSat ; } else if ( hminu0tb2o
< rtP . fmtja5mwec . Saturation2_LowerSat ) { hminu0tb2o = rtP . fmtja5mwec .
Saturation2_LowerSat ; } lnxpicup03 = muDoubleScalarRound ( ( rtB .
iylpq3hghr + transPt [ 0 ] ) * rtP . fmtja5mwec . Gain_Gain ) + rtP .
fmtja5mwec . Bias1_Bias ; if ( lnxpicup03 > rtP . fmtja5mwec .
Saturation3_UpperSat ) { lnxpicup03 = rtP . fmtja5mwec . Saturation3_UpperSat
; } else if ( lnxpicup03 < rtP . fmtja5mwec . Saturation3_LowerSat ) {
lnxpicup03 = rtP . fmtja5mwec . Saturation3_LowerSat ; } tmp =
muDoubleScalarFloor ( hminu0tb2o ) ; if ( ( rtP . fmtja5mwec .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 1258.0 ) ) ) ) { if ( rtP . fmtja5mwec .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
fmtja5mwec [ hgqywfela5 ] . jblghem2vo == 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . fmtja5mwec [
hgqywfela5 ] . jblghem2vo != 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
, 1 , rtDW . fmtja5mwec [ hgqywfela5 ] . jblghem2vo ) ;
rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . fmtja5mwec [
hgqywfela5 ] . jblghem2vo < MAX_uint32_T ) { rtDW . fmtja5mwec [ hgqywfela5 ]
. jblghem2vo ++ ; } } else { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } tmp = muDoubleScalarFloor (
lnxpicup03 ) ; if ( ( rtP . fmtja5mwec .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 628.0 ) ) ) ) { if ( rtP . fmtja5mwec .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
fmtja5mwec [ hgqywfela5 ] . jblghem2vo == 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . fmtja5mwec [
hgqywfela5 ] . jblghem2vo != 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
, 1 , rtDW . fmtja5mwec [ hgqywfela5 ] . jblghem2vo ) ;
rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . fmtja5mwec [
hgqywfela5 ] . jblghem2vo < MAX_uint32_T ) { rtDW . fmtja5mwec [ hgqywfela5 ]
. jblghem2vo ++ ; } } else { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } if ( muDoubleScalarIsNaN (
lnxpicup03 ) ) { lnxpicup03 = 0.0 ; } if ( muDoubleScalarIsNaN ( hminu0tb2o )
) { hminu0tb2o = 0.0 ; } if ( lnxpicup03 > 628.0 ) { lnxpicup03 = 628.0 ; }
else if ( lnxpicup03 < 0.0 ) { lnxpicup03 = 0.0 ; } if ( hminu0tb2o > 1258.0
) { hminu0tb2o = 1258.0 ; } else if ( hminu0tb2o < 0.0 ) { hminu0tb2o = 0.0 ;
} coy3ecddge = rtP . fmtja5mwec . DirectLookupTablenD_table [ ( int32_T )
lnxpicup03 * 1259 + ( int32_T ) hminu0tb2o ] ; } rtB . px2fcnrkgv [
hgqywfela5 ] = coy3ecddge ; } void ky15qktrhk ( void ) { int32_T ht2x4a5kjg ;
for ( ht2x4a5kjg = 0 ; ht2x4a5kjg < 199 ; ht2x4a5kjg ++ ) { rtDW . nnxbi4fgqg
[ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv = 0U ; } }
void gucvuibxa4 ( int32_T ht2x4a5kjg ) { real_T f1y2gsgwtp [ 3 ] ; real32_T
ftdhcrax5z ; f1y2gsgwtp [ 0 ] = rtB . nnxbi4fgqg [ rtDW . jhqzz2bves ] .
a5xinuasmi [ ht2x4a5kjg ] ; { real_T n1cd5wafy3 [ 3 ] ; real_T bsnvtwzkmz ;
real_T ckrsjnz3ue ; real_T tmp ; int32_T i ; SimStruct * S ; void * diag ;
f1y2gsgwtp [ 1 ] = rtB . hrtlirekve ; f1y2gsgwtp [ 2 ] = rtP . nnxbi4fgqg .
nnxbi4fgqg . Constant_Value ; ckrsjnz3ue = f1y2gsgwtp [ 1 ] ; bsnvtwzkmz =
f1y2gsgwtp [ 0 ] ; tmp = f1y2gsgwtp [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
n1cd5wafy3 [ i ] = ( rtB . g4h00jrxug [ i + 3 ] * ckrsjnz3ue + rtB .
g4h00jrxug [ i ] * bsnvtwzkmz ) + rtB . g4h00jrxug [ i + 6 ] * tmp ; }
ckrsjnz3ue = muDoubleScalarRound ( rtP . nnxbi4fgqg . nnxbi4fgqg .
Constant1_Value - ( n1cd5wafy3 [ 1 ] + rtB . bdnigyvsyn ) * rtP . nnxbi4fgqg
. nnxbi4fgqg . Gain1_Gain ) + rtP . nnxbi4fgqg . nnxbi4fgqg . Bias_Bias ; if
( ckrsjnz3ue > rtP . nnxbi4fgqg . nnxbi4fgqg . Saturation_UpperSat ) {
ckrsjnz3ue = rtP . nnxbi4fgqg . nnxbi4fgqg . Saturation_UpperSat ; } else if
( ckrsjnz3ue < rtP . nnxbi4fgqg . nnxbi4fgqg . Saturation_LowerSat ) {
ckrsjnz3ue = rtP . nnxbi4fgqg . nnxbi4fgqg . Saturation_LowerSat ; }
bsnvtwzkmz = muDoubleScalarRound ( ( n1cd5wafy3 [ 0 ] + rtB . iylpq3hghr ) *
rtP . nnxbi4fgqg . nnxbi4fgqg . Gain_Gain ) + rtP . nnxbi4fgqg . nnxbi4fgqg .
Bias1_Bias ; if ( bsnvtwzkmz > rtP . nnxbi4fgqg . nnxbi4fgqg .
Saturation1_UpperSat ) { bsnvtwzkmz = rtP . nnxbi4fgqg . nnxbi4fgqg .
Saturation1_UpperSat ; } else if ( bsnvtwzkmz < rtP . nnxbi4fgqg . nnxbi4fgqg
. Saturation1_LowerSat ) { bsnvtwzkmz = rtP . nnxbi4fgqg . nnxbi4fgqg .
Saturation1_LowerSat ; } tmp = muDoubleScalarFloor ( ckrsjnz3ue ) ; if ( (
rtP . nnxbi4fgqg . nnxbi4fgqg .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 1258.0 ) ) ) ) { if ( rtP . nnxbi4fgqg . nnxbi4fgqg .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv ==
0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . nnxbi4fgqg [
rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv != 0U ) { S =
rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
, 1 , rtDW . nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] .
mrjx3dkhpv ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW .
nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv <
MAX_uint32_T ) { rtDW . nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [
ht2x4a5kjg ] . mrjx3dkhpv ++ ; } } else { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } tmp = muDoubleScalarFloor (
bsnvtwzkmz ) ; if ( ( rtP . nnxbi4fgqg . nnxbi4fgqg .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 628.0 ) ) ) ) { if ( rtP . nnxbi4fgqg . nnxbi4fgqg .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv ==
0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . nnxbi4fgqg [
rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv != 0U ) { S =
rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
, 1 , rtDW . nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] .
mrjx3dkhpv ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW .
nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [ ht2x4a5kjg ] . mrjx3dkhpv <
MAX_uint32_T ) { rtDW . nnxbi4fgqg [ rtDW . jhqzz2bves ] . nnxbi4fgqg [
ht2x4a5kjg ] . mrjx3dkhpv ++ ; } } else { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } if ( muDoubleScalarIsNaN (
bsnvtwzkmz ) ) { bsnvtwzkmz = 0.0 ; } if ( muDoubleScalarIsNaN ( ckrsjnz3ue )
) { ckrsjnz3ue = 0.0 ; } if ( bsnvtwzkmz > 628.0 ) { bsnvtwzkmz = 628.0 ; }
else if ( bsnvtwzkmz < 0.0 ) { bsnvtwzkmz = 0.0 ; } if ( ckrsjnz3ue > 1258.0
) { ckrsjnz3ue = 1258.0 ; } else if ( ckrsjnz3ue < 0.0 ) { ckrsjnz3ue = 0.0 ;
} ftdhcrax5z = rtP . nnxbi4fgqg . nnxbi4fgqg . DirectLookupTablenD_table [ (
int32_T ) bsnvtwzkmz * 1259 + ( int32_T ) ckrsjnz3ue ] ; } rtB . nnxbi4fgqg [
rtDW . jhqzz2bves ] . i1paemfyy5 [ ht2x4a5kjg ] = ftdhcrax5z ; } void
MdlInitialize ( void ) { rtDW . onlvei224w = rtP . DiscreteTimeIntegrator_IC
; rtDW . jkf3nm3nbv = rtP . DiscreteTimeIntegrator1_IC ; rtDW . cquyyzdzbt =
rtP . DiscreteTimeIntegrator_IC_f5z3vyriqm ; rtDW . lrnmt0mvw5 = rtP .
DiscreteTimeIntegrator1_IC_ervpavkjfk ; rtDW . bie05bd4ab = rtP .
RobotSimulator_startX ; rtDW . ni53pjisvf = rtP . RobotSimulator_startY ;
rtDW . b4bqgf4dhw = rtP . RobotSimulator_startTheta * 0.017453292519943295 ;
rtDW . ihgcj0rg1c = rtP . DiscreteTimeIntegrator_IC_i43ho510i4 ; rtDW .
nqo0sx2y20 [ 0 ] = 0.0 ; rtDW . nqo0sx2y20 [ 1 ] = 0.0 ; rtDW . nqo0sx2y20 [
2 ] = 0.0 ; rtDW . n0rkvty3rm = rtP . DiscreteTimeIntegrator_IC_e3x2ks5ohu ;
rtDW . mtncgxqpgg [ 0 ] = 0.0 ; rtDW . mtncgxqpgg [ 1 ] = 0.0 ; rtDW .
mtncgxqpgg [ 2 ] = 0.0 ; rtDW . eenjimbo4a = rtP . Difference_ICPrevInput ;
c1fpuwcsi3 ( ) ; rtDW . kxqwml5tfx = ij3oeqmyen ; rtDW . fhtms5vxtb = 0U ;
rtDW . drdk50ofrw = e2sfl1qpe3 ; rtDW . bduxriqlxu = 0.0 ; memset ( & rtDW .
iuwdeh0o2d [ 0 ] , 0 , 60U * sizeof ( real_T ) ) ; rtDW . hqps1swkf5 = 0.0 ;
rtDW . l4jjy24ze2 = 0.0 ; rtDW . pd4jg1jyod = 0.0 ; rtDW . mhy0fuih2h = 0.0 ;
rtDW . gpyrvqffs3 = 0.0 ; rtDW . bjswwe2xbu = 0.0 ; rtDW . gtn1wjmrwt = 0.0 ;
rtDW . iesem4g5ze = 0.0 ; rtDW . glgpemjeyx = 0.0 ; rtDW . kftjrjvgit = 0.0 ;
rtDW . fqvgstrkfl = 0.0 ; rtB . b3j2perezy = 0.0 ; rtB . mgh0bzr53e = 0.0 ;
rtDW . jxpofb2f25 = ij3oeqmyen ; rtDW . gcbmowb40i = 0U ; rtDW . ho0sx3ydv5 =
e2sfl1qpe3 ; rtB . bvsyqq0avh = 0.0 ; rtDW . mdgfrwm0ue = ij3oeqmyen ; rtDW .
lb2eprmj4o = 0U ; rtDW . nerakhrzb5 = e2sfl1qpe3 ; rtB . ect0113fcp = 0.0 ;
rtB . l05rkglauf = 0.0 ; rtDW . nfrpqyqicb = ij3oeqmyen ; rtDW . a4woko0313 =
0U ; rtDW . lyqqvkmpdn = ij3oeqmyen ; rtDW . j0b02r3oov = 0U ; rtDW .
jhqzz2bves = 0 ; while ( rtDW . jhqzz2bves < 1 ) { rtDW . nnxbi4fgqg [ rtDW .
jhqzz2bves ] . h2z0k43iei = ij3oeqmyen ; rtDW . nnxbi4fgqg [ rtDW .
jhqzz2bves ] . hvszrpwqhg = 0U ; rtDW . jhqzz2bves ++ ; } } void MdlStart (
void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"iv_DetectObject/To wlwr/Mux" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 2 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mzbp2gbupe . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b8289287-e230-4d48-9851-b7d880cb66c3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . mzbp2gbupe . AQHandles , hDT , & srcInfo ) ; if ( rtDW . mzbp2gbupe .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mzbp2gbupe . AQHandles ,
"0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
mzbp2gbupe . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mzbp2gbupe .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mzbp2gbupe . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mzbp2gbupe . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } icltubuh34 ( ) ; rtDW . jhqzz2bves =
0 ; while ( rtDW . jhqzz2bves < 1 ) { memset ( & rtB . nnxbi4fgqg [ rtDW .
jhqzz2bves ] . a5xinuasmi [ 0 ] , 0 , 199U * sizeof ( real_T ) ) ; ky15qktrhk
( ) ; rtDW . jhqzz2bves ++ ; } { SimStruct * rts = ssGetSFunction ( rtS , 0 )
; { static const char * blockSIDForSFcnLoader = "iv_DetectObject:4:401" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = ssGetmdlStart ( rts ) ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T n5v3otznnf [ 2 ] ; real_T aok40h4fye ;
real_T dn3pzke0vc ; real_T ltysaf1zql ; real_T mobryh41lr ; int32_T b_ii ;
int32_T idx ; int32_T ii_size_idx_0 ; uint8_T ii_data_idx_0 ; boolean_T
exitg1 ; rtB . ji00wv3014 = rtDW . onlvei224w ; rtB . decjdihxcw = rtDW .
jkf3nm3nbv ; dn3pzke0vc = muDoubleScalarCeil ( rtP . ticksPerRot / 360.0 *
rtDW . cquyyzdzbt ) ; ltysaf1zql = muDoubleScalarCeil ( rtP . ticksPerRot /
360.0 * rtDW . lrnmt0mvw5 ) ; rtB . gz1dfa42lu = ( 6.2831853071795862 * rtP .
wheelR / rtP . ticksPerRot * dn3pzke0vc + 6.2831853071795862 * rtP . wheelR /
rtP . ticksPerRot * ltysaf1zql ) * rtP . Multiply2_Gain ; rtB . ditq055ebh =
( 6.2831853071795862 * rtP . wheelR / rtP . ticksPerRot * ltysaf1zql -
6.2831853071795862 * rtP . wheelR / rtP . ticksPerRot * dn3pzke0vc ) / rtP .
axleLength * rtP . Multiply5_Gain ; rtB . iylpq3hghr = rtDW . bie05bd4ab ;
rtB . bdnigyvsyn = rtDW . ni53pjisvf ; aok40h4fye = rtDW . b4bqgf4dhw ; rtB .
kbohsqzdeb = muDoubleScalarMod ( rtDW . b4bqgf4dhw , rtP . Circle_Value ) ;
parallel_for ( 4 , j0agmexpcb , 1 , "j0agmexpcb" ) ; if ( rtB . px2fcnrkgv [
0 ] > rtP . Switch_Threshold_jhitgx5agm ) { rtB . gqsc4yxprh [ 0 ] = rtP .
LineSensor_envVal ; } else { rtB . gqsc4yxprh [ 0 ] = rtP .
LineSensor_lineVal ; } if ( rtB . px2fcnrkgv [ 1 ] > rtP .
Switch_Threshold_jhitgx5agm ) { rtB . gqsc4yxprh [ 1 ] = rtP .
LineSensor_envVal ; } else { rtB . gqsc4yxprh [ 1 ] = rtP .
LineSensor_lineVal ; } if ( rtB . px2fcnrkgv [ 2 ] > rtP .
Switch_Threshold_jhitgx5agm ) { rtB . gqsc4yxprh [ 2 ] = rtP .
LineSensor_envVal ; } else { rtB . gqsc4yxprh [ 2 ] = rtP .
LineSensor_lineVal ; } if ( rtB . px2fcnrkgv [ 3 ] > rtP .
Switch_Threshold_jhitgx5agm ) { rtB . gqsc4yxprh [ 3 ] = rtP .
LineSensor_envVal ; } else { rtB . gqsc4yxprh [ 3 ] = rtP .
LineSensor_lineVal ; } rtDW . kxqwml5tfx = ij3oeqmyen ; if ( rtDW .
fhtms5vxtb == 0U ) { rtDW . fhtms5vxtb = 1U ; rtDW . drdk50ofrw = j4j5wvcstg
; rtB . b3j2perezy = 0.0 ; for ( idx = 0 ; idx < 60 ; idx ++ ) { rtDW .
iuwdeh0o2d [ idx ] = - 1.0 ; } rtDW . mhy0fuih2h = 1.0 ; } else { switch (
rtDW . drdk50ofrw ) { case or0q0vdcve : if ( rtB . gz1dfa42lu >= rtDW .
bduxriqlxu ) { rtDW . drdk50ofrw = h3v0w0dbjg ; rtB . b3j2perezy = 4.0 ; rtDW
. l4jjy24ze2 = 180.0 * rtB . mgh0bzr53e + rtB . ditq055ebh ; rtDW .
pd4jg1jyod = 360.0 * rtB . mgh0bzr53e + rtB . ditq055ebh ; rtDW . glgpemjeyx
= 2.5 - 0.5 * rtB . mgh0bzr53e ; rtDW . iesem4g5ze = 0.5 * rtB . mgh0bzr53e +
2.5 ; rtDW . gtn1wjmrwt = rtB . gqsc4yxprh [ ( int32_T ) rtDW . glgpemjeyx -
1 ] ; rtDW . hqps1swkf5 = rtB . gqsc4yxprh [ ( int32_T ) rtDW . iesem4g5ze -
1 ] ; rtDW . fqvgstrkfl = 0.0 ; rtDW . kftjrjvgit = 0.0 ; rtDW . iuwdeh0o2d [
( int32_T ) rtDW . mhy0fuih2h - 1 ] = rtB . ji00wv3014 ; rtDW . iuwdeh0o2d [
( int32_T ) rtDW . mhy0fuih2h + 14 ] = rtB . decjdihxcw ; rtDW . gpyrvqffs3 =
1.0 ; if ( ( ! ( rtB . gqsc4yxprh [ 1 ] != 0.0 ) ) || ( ! ( rtB . gqsc4yxprh
[ 2 ] != 0.0 ) ) ) { rtDW . iuwdeh0o2d [ ( ( int32_T ) rtDW . mhy0fuih2h + 15
* ( ( int32_T ) rtDW . gpyrvqffs3 - 1 ) ) + 4 ] = rtB . ditq055ebh ; rtDW .
iuwdeh0o2d [ ( ( int32_T ) rtDW . mhy0fuih2h + 15 * ( ( int32_T ) rtDW .
gpyrvqffs3 - 1 ) ) + 9 ] = 0.0 ; rtDW . gpyrvqffs3 ++ ; } } break ; case
fcnnmqgwfi : if ( ( rtB . gqsc4yxprh [ 0 ] == 0.0 ) || ( rtB . gqsc4yxprh [ 3
] == 0.0 ) ) { rtDW . drdk50ofrw = or0q0vdcve ; if ( rtB . gqsc4yxprh [ 0 ]
== 0.0 ) { rtB . mgh0bzr53e = 1.0 ; } else { rtB . mgh0bzr53e = - 1.0 ; }
rtDW . bduxriqlxu = rtB . gz1dfa42lu + 0.06 ; } break ; case cnm1w1amck : rtB
. b3j2perezy = 0.0 ; if ( rtB . gz1dfa42lu >= rtDW . bduxriqlxu ) { rtDW .
mhy0fuih2h ++ ; rtDW . drdk50ofrw = fcnnmqgwfi ; } break ; case ll00kim3ft :
rtB . b3j2perezy = 4.0 ; if ( ( rtDW . bjswwe2xbu - rtB . ditq055ebh ) * rtB
. mgh0bzr53e <= 0.0 ) { rtDW . drdk50ofrw = cnm1w1amck ; rtB . b3j2perezy =
0.0 ; rtDW . bduxriqlxu = rtB . gz1dfa42lu + 0.04 ; } break ; case h3v0w0dbjg
: rtB . b3j2perezy = 4.0 ; if ( ( ! ( rtDW . l4jjy24ze2 != 0.0 ) ) && (
muDoubleScalarAbs ( rtB . ditq055ebh - rtDW . pd4jg1jyod ) <= 10.0 ) ) { rtDW
. drdk50ofrw = ll00kim3ft ; rtB . b3j2perezy = 4.0 ; rtDW . gpyrvqffs3 = 1.0
; idx = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( idx < 4 ) ) { rtDW .
gpyrvqffs3 = ( real_T ) idx + 1.0 ; if ( ! ( rtDW . iuwdeh0o2d [ ( ( (
int32_T ) rtDW . gpyrvqffs3 - 1 ) * 15 + ( int32_T ) rtDW . mhy0fuih2h ) + 9
] != 0.0 ) ) { rtDW . bjswwe2xbu = rtDW . iuwdeh0o2d [ ( ( ( int32_T ) rtDW .
gpyrvqffs3 - 1 ) * 15 + ( int32_T ) rtDW . mhy0fuih2h ) + 4 ] ; if ( rtDW .
bjswwe2xbu - rtB . ditq055ebh > 0.0 ) { rtB . mgh0bzr53e = 1.0 ; } else { rtB
. mgh0bzr53e = - 1.0 ; } exitg1 = true ; } else { idx ++ ; } } } else { if (
( rtDW . hqps1swkf5 != 0.0 ) && ( ! ( rtB . gqsc4yxprh [ ( int32_T ) rtDW .
iesem4g5ze - 1 ] != 0.0 ) ) ) { rtDW . kftjrjvgit = rtB . ditq055ebh ; rtDW .
fqvgstrkfl = 1.0 ; } if ( ( ! ( rtDW . gtn1wjmrwt != 0.0 ) ) && ( rtB .
gqsc4yxprh [ ( int32_T ) rtDW . glgpemjeyx - 1 ] != 0.0 ) && ( rtDW .
fqvgstrkfl != 0.0 ) ) { rtDW . iuwdeh0o2d [ ( ( int32_T ) rtDW . mhy0fuih2h +
15 * ( ( int32_T ) rtDW . gpyrvqffs3 - 1 ) ) + 4 ] = ( rtB . ditq055ebh +
rtDW . kftjrjvgit ) / 2.0 ; rtDW . fqvgstrkfl = 0.0 ; if ( ( rtDW .
l4jjy24ze2 != 0.0 ) && ( muDoubleScalarAbs ( rtDW . iuwdeh0o2d [ ( ( (
int32_T ) rtDW . gpyrvqffs3 - 1 ) * 15 + ( int32_T ) rtDW . mhy0fuih2h ) + 4
] - rtDW . l4jjy24ze2 ) <= 10.0 ) ) { rtDW . iuwdeh0o2d [ ( ( int32_T ) rtDW
. mhy0fuih2h + 15 * ( ( int32_T ) rtDW . gpyrvqffs3 - 1 ) ) + 9 ] = 1.0 ;
rtDW . l4jjy24ze2 = 0.0 ; } else { rtDW . iuwdeh0o2d [ ( ( int32_T ) rtDW .
mhy0fuih2h + 15 * ( ( int32_T ) rtDW . gpyrvqffs3 - 1 ) ) + 9 ] = 0.0 ; }
rtDW . gpyrvqffs3 ++ ; } rtDW . gtn1wjmrwt = rtB . gqsc4yxprh [ ( int32_T )
rtDW . glgpemjeyx - 1 ] ; rtDW . hqps1swkf5 = rtB . gqsc4yxprh [ ( int32_T )
rtDW . iesem4g5ze - 1 ] ; } break ; default : rtB . b3j2perezy = 0.0 ; rtDW .
drdk50ofrw = fcnnmqgwfi ; break ; } } rtDW . jxpofb2f25 = ij3oeqmyen ; if (
rtDW . gcbmowb40i == 0U ) { rtDW . gcbmowb40i = 1U ; rtDW . ho0sx3ydv5 =
dde2u51qaz ; } else { rtB . bvsyqq0avh = ( rtB . gqsc4yxprh [ 2 ] - rtB .
gqsc4yxprh [ 1 ] ) * rtB . bmf1pvrpw0 ; } rtB . jz52v00tr3 =
muDoubleScalarMax ( rtP . Constant_Value_bw3epovpb1 , rtP .
Constant1_Value_bemiwsq1ta - rtP . Multiply1_Gain * muDoubleScalarAbs ( rtB .
bvsyqq0avh ) ) ; rtDW . mdgfrwm0ue = ij3oeqmyen ; if ( rtDW . lb2eprmj4o ==
0U ) { rtDW . lb2eprmj4o = 1U ; rtDW . nerakhrzb5 = fcnnmqgwfi ; } else {
switch ( rtDW . nerakhrzb5 ) { case dnffvl5ycp : if ( rtB . b3j2perezy != 5.0
) { rtDW . nerakhrzb5 = nabcdnqvbi ; } break ; case fcnnmqgwfi : if ( rtB .
b3j2perezy != 0.0 ) { rtDW . nerakhrzb5 = nabcdnqvbi ; } else { rtB .
l05rkglauf = rtB . bvsyqq0avh ; rtB . ect0113fcp = rtB . jz52v00tr3 ; } break
; case arfvqpq2pa : if ( rtB . b3j2perezy != 1.0 ) { rtDW . nerakhrzb5 =
nabcdnqvbi ; } break ; case fportvbopf : if ( rtB . b3j2perezy != 4.0 ) {
rtDW . nerakhrzb5 = nabcdnqvbi ; } else { rtB . l05rkglauf = 0.51 * rtB .
mgh0bzr53e ; rtB . ect0113fcp = 0.0 ; } break ; case nabcdnqvbi : if ( rtB .
b3j2perezy == 0.0 ) { rtDW . nerakhrzb5 = fcnnmqgwfi ; } else if ( rtB .
b3j2perezy == 4.0 ) { rtDW . nerakhrzb5 = fportvbopf ; } else if ( rtB .
b3j2perezy == 3.0 ) { rtDW . nerakhrzb5 = mgyi5nfq4k ; rtB . ect0113fcp = 0.0
; rtB . l05rkglauf = 0.0 ; } else if ( rtB . b3j2perezy == 5.0 ) { rtDW .
nerakhrzb5 = dnffvl5ycp ; rtB . l05rkglauf = 0.0 ; rtB . ect0113fcp = - 0.03
; } else if ( rtB . b3j2perezy == 1.0 ) { rtDW . nerakhrzb5 = arfvqpq2pa ;
rtB . ect0113fcp = 0.03 ; rtB . l05rkglauf = - 0.1 ; } else if ( rtB .
b3j2perezy == 2.0 ) { rtDW . nerakhrzb5 = kyrq00ztl1 ; rtB . ect0113fcp = 0.0
; rtB . l05rkglauf = 500.0 ; } break ; case mgyi5nfq4k : break ; default : if
( rtB . b3j2perezy != 2.0 ) { rtDW . nerakhrzb5 = nabcdnqvbi ; } break ; } }
rtDW . nfrpqyqicb = ij3oeqmyen ; { rtB . jwdxaqf2qz = ( rtP . Internal_C [ 0
] ) * rtDW . nqo0sx2y20 [ 0 ] + ( rtP . Internal_C [ 1 ] ) * rtDW .
nqo0sx2y20 [ 1 ] + ( rtP . Internal_C [ 2 ] ) * rtDW . nqo0sx2y20 [ 2 ] ; }
if ( rtP . LeftMotor_sensorType > rtP . Switch_Threshold ) { dn3pzke0vc = rtP
. Gain_Gain * rtDW . ihgcj0rg1c ; } else { dn3pzke0vc = rtB . jwdxaqf2qz ; }
{ rtB . jswowza1d4 = ( rtP . Internal_C_hiyczu5j42 [ 0 ] ) * rtDW .
mtncgxqpgg [ 0 ] + ( rtP . Internal_C_hiyczu5j42 [ 1 ] ) * rtDW . mtncgxqpgg
[ 1 ] + ( rtP . Internal_C_hiyczu5j42 [ 2 ] ) * rtDW . mtncgxqpgg [ 2 ] ; }
if ( rtP . RightMotor_sensorType > rtP . Switch_Threshold_bmwdvzwwf2 ) {
ltysaf1zql = rtP . Gain_Gain_o4hmcpr5ca * rtDW . n0rkvty3rm ; } else {
ltysaf1zql = rtB . jswowza1d4 ; } rtB . peqplb45u4 = ( ltysaf1zql -
dn3pzke0vc ) * rtB . a34al3yjl2 ; mobryh41lr = ( dn3pzke0vc + ltysaf1zql ) *
rtB . ph2pcx1thu ; rtB . aj2jxy1h1h = mobryh41lr * muDoubleScalarCos (
aok40h4fye ) ; rtB . hylamboxo5 = mobryh41lr * muDoubleScalarSin ( aok40h4fye
) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; { static const char *
blockSIDForSFcnLoader = "iv_DetectObject:4:401" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * , int ) = rts -> modelMethods . sFcn .
mdlOutputs . level2 ; sfcnLoader_separateComplexHandler_withTID ( rts ,
sfcnMethodPtr , ( 0 <= 1 ) && gbl_raccel_tid01eq ? 0 : 0 ) ; } } aok40h4fye =
rtP . Multiply_Gain * rtB . ditq055ebh ; mobryh41lr = rtB . gz1dfa42lu - rtDW
. eenjimbo4a ; rtB . bomtjdim42 = mobryh41lr * muDoubleScalarSin ( aok40h4fye
) ; rtB . b5nsh0zsui = mobryh41lr * muDoubleScalarCos ( aok40h4fye ) ; rtB .
cuccgthc4o = rtP . Gain2_Gain * dn3pzke0vc ; rtB . pnvlipz4jm = rtP .
Gain3_Gain * ltysaf1zql ; n5v3otznnf [ 0 ] = rtB . ect0113fcp ; n5v3otznnf [
1 ] = rtB . l05rkglauf ; dn3pzke0vc = 1.0 / rtP . Towlwr_wheelR ; rtB .
lw52j1u5b3 = rtP . InputPWM [ plook_u32d_binckan ( ( rtP .
changeparameters_Gain [ 0 ] * n5v3otznnf [ 0 ] + n5v3otznnf [ 1 ] * rtP .
changeparameters_Gain [ 2 ] ) * dn3pzke0vc , rtP . WheelSpeed , 172U ) ] ;
rtB . ne2ywir1gp = rtP . InputPWM [ plook_u32d_binckan ( ( n5v3otznnf [ 0 ] *
rtP . changeparameters_Gain [ 1 ] + n5v3otznnf [ 1 ] * rtP .
changeparameters_Gain [ 3 ] ) * dn3pzke0vc , rtP . WheelSpeed , 172U ) ] ; {
if ( rtDW . mzbp2gbupe . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . mzbp2gbupe . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & n5v3otznnf [ 0 ] + 0 ) ; } } rtDW . lyqqvkmpdn = ij3oeqmyen ;
rtB . g4h00jrxug [ 0 ] = muDoubleScalarCos ( rtB . kbohsqzdeb ) ; rtB .
g4h00jrxug [ 3 ] = - muDoubleScalarSin ( rtB . kbohsqzdeb ) ; rtB .
g4h00jrxug [ 6 ] = 0.0 ; rtB . g4h00jrxug [ 1 ] = muDoubleScalarSin ( rtB .
kbohsqzdeb ) ; rtB . g4h00jrxug [ 4 ] = muDoubleScalarCos ( rtB . kbohsqzdeb
) ; rtB . g4h00jrxug [ 7 ] = 0.0 ; rtB . g4h00jrxug [ 2 ] = 0.0 ; rtB .
g4h00jrxug [ 5 ] = 0.0 ; rtB . g4h00jrxug [ 8 ] = 1.0 ; rtDW . jhqzz2bves = 0
; while ( rtDW . jhqzz2bves < 1 ) { rtB . hrtlirekve = rtP .
Constant1_Value_bv54zl0zqv ; for ( idx = 0 ; idx < 199 ; idx ++ ) { rtB .
nnxbi4fgqg [ rtDW . jhqzz2bves ] . a5xinuasmi [ idx ] = rtP . nnxbi4fgqg .
Constant_Value [ idx ] + rtP . Constant_Value_e2utgdqno3 ; } parallel_for (
199 , gucvuibxa4 , 1 , "gucvuibxa4" ) ; rtDW . nnxbi4fgqg [ rtDW . jhqzz2bves
] . h2z0k43iei = ij3oeqmyen ; idx = 0 ; ii_size_idx_0 = 1 ; b_ii = 0 ; exitg1
= false ; while ( ( ! exitg1 ) && ( b_ii < 199 ) ) { if ( ! ( rtB .
nnxbi4fgqg [ rtDW . jhqzz2bves ] . i1paemfyy5 [ b_ii ] != 0.0F ) ) { idx = 1
; ii_data_idx_0 = ( uint8_T ) ( b_ii + 1 ) ; exitg1 = true ; } else { b_ii ++
; } } if ( idx == 0 ) { ii_size_idx_0 = 0 ; } rtB . nwywsnx52p = 0.0 ; if (
ii_size_idx_0 != 0 ) { rtB . nwywsnx52p = rtP . nnxbi4fgqg . Constant_Value [
ii_data_idx_0 - 1 ] ; } rtDW . jhqzz2bves ++ ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID2 ( int_T tid ) { rtB . a34al3yjl2 = rtP . wheelR / rtP .
axleLength ; rtB . ph2pcx1thu = rtP . Gain1_Gain * rtP . wheelR ; rtB .
bmf1pvrpw0 = rtP . Multiply_Gain_odfbensap2 * rtP .
Constant1_Value_bemiwsq1ta ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { rtDW . onlvei224w += rtP . DiscreteTimeIntegrator_gainval * rtB
. b5nsh0zsui ; rtDW . jkf3nm3nbv += rtP . DiscreteTimeIntegrator1_gainval *
rtB . bomtjdim42 ; rtDW . cquyyzdzbt += rtP .
DiscreteTimeIntegrator_gainval_lzyl4k4zxv * rtB . cuccgthc4o ; rtDW .
lrnmt0mvw5 += rtP . DiscreteTimeIntegrator1_gainval_fz4ugw3les * rtB .
pnvlipz4jm ; rtDW . bie05bd4ab += rtP .
DiscreteTimeIntegrator_gainval_lipa2hzbkc * rtB . aj2jxy1h1h ; rtDW .
ni53pjisvf += rtP . DiscreteTimeIntegrator1_gainval_goiftktzjh * rtB .
hylamboxo5 ; rtDW . b4bqgf4dhw += rtP . DiscreteTimeIntegrator2_gainval * rtB
. peqplb45u4 ; rtDW . ihgcj0rg1c += rtP .
DiscreteTimeIntegrator_gainval_afikqgzpe0 * rtB . jwdxaqf2qz ; { real_T xnew
[ 3 ] ; xnew [ 0 ] = ( rtP . Internal_A [ 0 ] ) * rtDW . nqo0sx2y20 [ 0 ] + (
rtP . Internal_A [ 1 ] ) * rtDW . nqo0sx2y20 [ 1 ] + ( rtP . Internal_A [ 2 ]
) * rtDW . nqo0sx2y20 [ 2 ] ; xnew [ 0 ] += ( rtP . Internal_B [ 0 ] ) * rtB
. lw52j1u5b3 ; xnew [ 1 ] = ( rtP . Internal_A [ 3 ] ) * rtDW . nqo0sx2y20 [
0 ] + ( rtP . Internal_A [ 4 ] ) * rtDW . nqo0sx2y20 [ 1 ] + ( rtP .
Internal_A [ 5 ] ) * rtDW . nqo0sx2y20 [ 2 ] ; xnew [ 1 ] += ( rtP .
Internal_B [ 1 ] ) * rtB . lw52j1u5b3 ; xnew [ 2 ] = ( rtP . Internal_A [ 6 ]
) * rtDW . nqo0sx2y20 [ 0 ] + ( rtP . Internal_A [ 7 ] ) * rtDW . nqo0sx2y20
[ 1 ] + ( rtP . Internal_A [ 8 ] ) * rtDW . nqo0sx2y20 [ 2 ] ; xnew [ 2 ] +=
( rtP . Internal_B [ 2 ] ) * rtB . lw52j1u5b3 ; ( void ) memcpy ( & rtDW .
nqo0sx2y20 [ 0 ] , xnew , sizeof ( real_T ) * 3 ) ; } rtDW . n0rkvty3rm +=
rtP . DiscreteTimeIntegrator_gainval_ptlrlhszmg * rtB . jswowza1d4 ; { real_T
xnew [ 3 ] ; xnew [ 0 ] = ( rtP . Internal_A_avp5ztxxzl [ 0 ] ) * rtDW .
mtncgxqpgg [ 0 ] + ( rtP . Internal_A_avp5ztxxzl [ 1 ] ) * rtDW . mtncgxqpgg
[ 1 ] + ( rtP . Internal_A_avp5ztxxzl [ 2 ] ) * rtDW . mtncgxqpgg [ 2 ] ;
xnew [ 0 ] += ( rtP . Internal_B_ebkdikdi50 [ 0 ] ) * rtB . ne2ywir1gp ; xnew
[ 1 ] = ( rtP . Internal_A_avp5ztxxzl [ 3 ] ) * rtDW . mtncgxqpgg [ 0 ] + (
rtP . Internal_A_avp5ztxxzl [ 4 ] ) * rtDW . mtncgxqpgg [ 1 ] + ( rtP .
Internal_A_avp5ztxxzl [ 5 ] ) * rtDW . mtncgxqpgg [ 2 ] ; xnew [ 1 ] += ( rtP
. Internal_B_ebkdikdi50 [ 1 ] ) * rtB . ne2ywir1gp ; xnew [ 2 ] = ( rtP .
Internal_A_avp5ztxxzl [ 6 ] ) * rtDW . mtncgxqpgg [ 0 ] + ( rtP .
Internal_A_avp5ztxxzl [ 7 ] ) * rtDW . mtncgxqpgg [ 1 ] + ( rtP .
Internal_A_avp5ztxxzl [ 8 ] ) * rtDW . mtncgxqpgg [ 2 ] ; xnew [ 2 ] += ( rtP
. Internal_B_ebkdikdi50 [ 2 ] ) * rtB . ne2ywir1gp ; ( void ) memcpy ( & rtDW
. mtncgxqpgg [ 0 ] , xnew , sizeof ( real_T ) * 3 ) ; } rtDW . eenjimbo4a =
rtB . gz1dfa42lu ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T
tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { { SimStruct
* rts = ssGetSFunction ( rtS , 0 ) ; { static const char *
blockSIDForSFcnLoader = "iv_DetectObject:4:401" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = rts -> modelMethods . sFcn . mdlTerminate ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } } { if ( rtDW .
mzbp2gbupe . AQHandles ) { sdiTerminateStreaming ( & rtDW . mzbp2gbupe .
AQHandles ) ; } } } static void mr_iv_DetectObject_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_iv_DetectObject_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_iv_DetectObject_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_iv_DetectObject_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_iv_DetectObject_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_iv_DetectObject_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_iv_DetectObject_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_iv_DetectObject_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_iv_DetectObject_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_iv_DetectObject_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_iv_DetectObject_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_iv_DetectObject_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_iv_DetectObject_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_iv_DetectObject_GetDWork ( ) { static
const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 50 ]
= { "rtDW.onlvei224w" , "rtDW.jkf3nm3nbv" , "rtDW.cquyyzdzbt" ,
"rtDW.lrnmt0mvw5" , "rtDW.bie05bd4ab" , "rtDW.ni53pjisvf" , "rtDW.b4bqgf4dhw"
, "rtDW.ihgcj0rg1c" , "rtDW.nqo0sx2y20" , "rtDW.n0rkvty3rm" ,
"rtDW.mtncgxqpgg" , "rtDW.eenjimbo4a" , "rtDW.bduxriqlxu" , "rtDW.iuwdeh0o2d"
, "rtDW.hqps1swkf5" , "rtDW.l4jjy24ze2" , "rtDW.pd4jg1jyod" ,
"rtDW.mhy0fuih2h" , "rtDW.gpyrvqffs3" , "rtDW.bjswwe2xbu" , "rtDW.gtn1wjmrwt"
, "rtDW.iesem4g5ze" , "rtDW.glgpemjeyx" , "rtDW.kftjrjvgit" ,
"rtDW.fqvgstrkfl" , "rtDW.cl001iwg3i" , "rtDW.jhqzz2bves" , "rtDW.lyqqvkmpdn"
, "rtDW.nfrpqyqicb" , "rtDW.kxqwml5tfx" , "rtDW.jxpofb2f25" ,
"rtDW.mdgfrwm0ue" , "rtDW.drdk50ofrw" , "rtDW.ho0sx3ydv5" , "rtDW.nerakhrzb5"
, "rtDW.j0b02r3oov" , "rtDW.a4woko0313" , "rtDW.fhtms5vxtb" ,
"rtDW.gcbmowb40i" , "rtDW.lb2eprmj4o" , "rtDW.gfj34s4ecr" , "rtDW.lslyhe01co"
, "rtDW.nnxbi4fgqg[0].h2z0k43iei" , "rtDW.nnxbi4fgqg[0].hvszrpwqhg" ,
"rtDW.nnxbi4fgqg[0].hwqj4kmtdf" ,
"rtDW.nnxbi4fgqg[0].nnxbi4fgqg[0].mrjx3dkhpv" ,
"rtDW.fmtja5mwec[0].dpx4b1tifg" , "rtDW.fmtja5mwec[0].jblghem2vo" ,
"rtDW.fmtja5mwec[0].pya3jbutrr" , "rtDW.fmtja5mwec[0].nnsvnkqyjy" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 50 , rtdwDataFieldNames )
; int k0 ; int k1 ; mxSetFieldByNumber ( rtdwData , 0 , 42 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . nnxbi4fgqg [ 0 ] .
h2z0k43iei ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 43 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . nnxbi4fgqg [ 0 ]
. hvszrpwqhg ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData ,
0 , 44 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . nnxbi4fgqg [ 0
] . hwqj4kmtdf ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData
, 0 , 45 , mxCreateUninitNumericMatrix ( 1 , 199 * sizeof ( rtDW . nnxbi4fgqg
[ 0 ] . nnxbi4fgqg [ 0 ] . mrjx3dkhpv ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 46 , mxCreateUninitNumericMatrix ( 1 , 4
* sizeof ( rtDW . fmtja5mwec [ 0 ] . dpx4b1tifg ) , mxUINT8_CLASS , mxREAL )
) ; mxSetFieldByNumber ( rtdwData , 0 , 47 , mxCreateUninitNumericMatrix ( 1
, 4 * sizeof ( rtDW . fmtja5mwec [ 0 ] . jblghem2vo ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 48 ,
mxCreateUninitNumericMatrix ( 1 , 4 * sizeof ( rtDW . fmtja5mwec [ 0 ] .
pya3jbutrr ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 49 , mxCreateUninitNumericMatrix ( 1 , 4 * sizeof ( rtDW . fmtja5mwec [ 0 ]
. nnsvnkqyjy ) , mxUINT8_CLASS , mxREAL ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) &
( rtDW . onlvei224w ) , sizeof ( rtDW . onlvei224w ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( rtDW . jkf3nm3nbv ) , sizeof ( rtDW . jkf3nm3nbv ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) &
( rtDW . cquyyzdzbt ) , sizeof ( rtDW . cquyyzdzbt ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) &
( rtDW . lrnmt0mvw5 ) , sizeof ( rtDW . lrnmt0mvw5 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) &
( rtDW . bie05bd4ab ) , sizeof ( rtDW . bie05bd4ab ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) &
( rtDW . ni53pjisvf ) , sizeof ( rtDW . ni53pjisvf ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) &
( rtDW . b4bqgf4dhw ) , sizeof ( rtDW . b4bqgf4dhw ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) &
( rtDW . ihgcj0rg1c ) , sizeof ( rtDW . ihgcj0rg1c ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) &
( rtDW . nqo0sx2y20 ) , sizeof ( rtDW . nqo0sx2y20 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) &
( rtDW . n0rkvty3rm ) , sizeof ( rtDW . n0rkvty3rm ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * )
& ( rtDW . mtncgxqpgg ) , sizeof ( rtDW . mtncgxqpgg ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( rtDW . eenjimbo4a ) , sizeof ( rtDW . eenjimbo4a ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * )
& ( rtDW . bduxriqlxu ) , sizeof ( rtDW . bduxriqlxu ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( rtDW . iuwdeh0o2d ) , sizeof ( rtDW . iuwdeh0o2d ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * )
& ( rtDW . hqps1swkf5 ) , sizeof ( rtDW . hqps1swkf5 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * )
& ( rtDW . l4jjy24ze2 ) , sizeof ( rtDW . l4jjy24ze2 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( rtDW . pd4jg1jyod ) , sizeof ( rtDW . pd4jg1jyod ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * )
& ( rtDW . mhy0fuih2h ) , sizeof ( rtDW . mhy0fuih2h ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * )
& ( rtDW . gpyrvqffs3 ) , sizeof ( rtDW . gpyrvqffs3 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * )
& ( rtDW . bjswwe2xbu ) , sizeof ( rtDW . bjswwe2xbu ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * )
& ( rtDW . gtn1wjmrwt ) , sizeof ( rtDW . gtn1wjmrwt ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( rtDW . iesem4g5ze ) , sizeof ( rtDW . iesem4g5ze ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * )
& ( rtDW . glgpemjeyx ) , sizeof ( rtDW . glgpemjeyx ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * )
& ( rtDW . kftjrjvgit ) , sizeof ( rtDW . kftjrjvgit ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * )
& ( rtDW . fqvgstrkfl ) , sizeof ( rtDW . fqvgstrkfl ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * )
& ( rtDW . cl001iwg3i ) , sizeof ( rtDW . cl001iwg3i ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * )
& ( rtDW . jhqzz2bves ) , sizeof ( rtDW . jhqzz2bves ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * )
& ( rtDW . lyqqvkmpdn ) , sizeof ( rtDW . lyqqvkmpdn ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * )
& ( rtDW . nfrpqyqicb ) , sizeof ( rtDW . nfrpqyqicb ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * )
& ( rtDW . kxqwml5tfx ) , sizeof ( rtDW . kxqwml5tfx ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * )
& ( rtDW . jxpofb2f25 ) , sizeof ( rtDW . jxpofb2f25 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * )
& ( rtDW . mdgfrwm0ue ) , sizeof ( rtDW . mdgfrwm0ue ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * )
& ( rtDW . drdk50ofrw ) , sizeof ( rtDW . drdk50ofrw ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * )
& ( rtDW . ho0sx3ydv5 ) , sizeof ( rtDW . ho0sx3ydv5 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * )
& ( rtDW . nerakhrzb5 ) , sizeof ( rtDW . nerakhrzb5 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * )
& ( rtDW . j0b02r3oov ) , sizeof ( rtDW . j0b02r3oov ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * )
& ( rtDW . a4woko0313 ) , sizeof ( rtDW . a4woko0313 ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * )
& ( rtDW . fhtms5vxtb ) , sizeof ( rtDW . fhtms5vxtb ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * )
& ( rtDW . gcbmowb40i ) , sizeof ( rtDW . gcbmowb40i ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * )
& ( rtDW . lb2eprmj4o ) , sizeof ( rtDW . lb2eprmj4o ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * )
& ( rtDW . gfj34s4ecr ) , sizeof ( rtDW . gfj34s4ecr ) ) ;
mr_iv_DetectObject_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * )
& ( rtDW . lslyhe01co ) , sizeof ( rtDW . lslyhe01co ) ) ; for ( k0 = 0 ; k0
< 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 42 , offset0
, & ( rtDW . nnxbi4fgqg [ k0 ] . h2z0k43iei ) , sizeof ( rtDW . nnxbi4fgqg [
0 ] . h2z0k43iei ) ) ; mr_iv_DetectObject_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 43 , offset0 , & ( rtDW . nnxbi4fgqg [ k0 ] . hvszrpwqhg ) ,
sizeof ( rtDW . nnxbi4fgqg [ 0 ] . hvszrpwqhg ) ) ;
mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 44 , offset0
, & ( rtDW . nnxbi4fgqg [ k0 ] . hwqj4kmtdf ) , sizeof ( rtDW . nnxbi4fgqg [
0 ] . hwqj4kmtdf ) ) ; for ( k1 = 0 ; k1 < 199 ; ++ k1 ) { const mwIndex
offset1 = k0 * 199 + k1 ; mr_iv_DetectObject_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 45 , offset1 , & ( rtDW . nnxbi4fgqg [ k0 ] . nnxbi4fgqg [ k1
] . mrjx3dkhpv ) , sizeof ( rtDW . nnxbi4fgqg [ 0 ] . nnxbi4fgqg [ 0 ] .
mrjx3dkhpv ) ) ; } } for ( k0 = 0 ; k0 < 4 ; ++ k0 ) { const mwIndex offset0
= k0 ; mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 46 ,
offset0 , & ( rtDW . fmtja5mwec [ k0 ] . dpx4b1tifg ) , sizeof ( rtDW .
fmtja5mwec [ 0 ] . dpx4b1tifg ) ) ;
mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 47 , offset0
, & ( rtDW . fmtja5mwec [ k0 ] . jblghem2vo ) , sizeof ( rtDW . fmtja5mwec [
0 ] . jblghem2vo ) ) ; mr_iv_DetectObject_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 48 , offset0 , & ( rtDW . fmtja5mwec [ k0 ] . pya3jbutrr ) ,
sizeof ( rtDW . fmtja5mwec [ 0 ] . pya3jbutrr ) ) ;
mr_iv_DetectObject_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 49 , offset0
, & ( rtDW . fmtja5mwec [ k0 ] . nnsvnkqyjy ) , sizeof ( rtDW . fmtja5mwec [
0 ] . nnsvnkqyjy ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
return ssDW ; } void mr_iv_DetectObject_SetDWork ( const mxArray * ssDW ) { (
void ) ssDW ; mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtB
) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ; int k1 ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . onlvei224w
) , rtdwData , 0 , 0 , sizeof ( rtDW . onlvei224w ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . jkf3nm3nbv
) , rtdwData , 0 , 1 , sizeof ( rtDW . jkf3nm3nbv ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . cquyyzdzbt
) , rtdwData , 0 , 2 , sizeof ( rtDW . cquyyzdzbt ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . lrnmt0mvw5
) , rtdwData , 0 , 3 , sizeof ( rtDW . lrnmt0mvw5 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . bie05bd4ab
) , rtdwData , 0 , 4 , sizeof ( rtDW . bie05bd4ab ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . ni53pjisvf
) , rtdwData , 0 , 5 , sizeof ( rtDW . ni53pjisvf ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . b4bqgf4dhw
) , rtdwData , 0 , 6 , sizeof ( rtDW . b4bqgf4dhw ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . ihgcj0rg1c
) , rtdwData , 0 , 7 , sizeof ( rtDW . ihgcj0rg1c ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . nqo0sx2y20
) , rtdwData , 0 , 8 , sizeof ( rtDW . nqo0sx2y20 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . n0rkvty3rm
) , rtdwData , 0 , 9 , sizeof ( rtDW . n0rkvty3rm ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . mtncgxqpgg
) , rtdwData , 0 , 10 , sizeof ( rtDW . mtncgxqpgg ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . eenjimbo4a
) , rtdwData , 0 , 11 , sizeof ( rtDW . eenjimbo4a ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . bduxriqlxu
) , rtdwData , 0 , 12 , sizeof ( rtDW . bduxriqlxu ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . iuwdeh0o2d
) , rtdwData , 0 , 13 , sizeof ( rtDW . iuwdeh0o2d ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . hqps1swkf5
) , rtdwData , 0 , 14 , sizeof ( rtDW . hqps1swkf5 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . l4jjy24ze2
) , rtdwData , 0 , 15 , sizeof ( rtDW . l4jjy24ze2 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . pd4jg1jyod
) , rtdwData , 0 , 16 , sizeof ( rtDW . pd4jg1jyod ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . mhy0fuih2h
) , rtdwData , 0 , 17 , sizeof ( rtDW . mhy0fuih2h ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . gpyrvqffs3
) , rtdwData , 0 , 18 , sizeof ( rtDW . gpyrvqffs3 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . bjswwe2xbu
) , rtdwData , 0 , 19 , sizeof ( rtDW . bjswwe2xbu ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . gtn1wjmrwt
) , rtdwData , 0 , 20 , sizeof ( rtDW . gtn1wjmrwt ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . iesem4g5ze
) , rtdwData , 0 , 21 , sizeof ( rtDW . iesem4g5ze ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . glgpemjeyx
) , rtdwData , 0 , 22 , sizeof ( rtDW . glgpemjeyx ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . kftjrjvgit
) , rtdwData , 0 , 23 , sizeof ( rtDW . kftjrjvgit ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . fqvgstrkfl
) , rtdwData , 0 , 24 , sizeof ( rtDW . fqvgstrkfl ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . cl001iwg3i
) , rtdwData , 0 , 25 , sizeof ( rtDW . cl001iwg3i ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . jhqzz2bves
) , rtdwData , 0 , 26 , sizeof ( rtDW . jhqzz2bves ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . lyqqvkmpdn
) , rtdwData , 0 , 27 , sizeof ( rtDW . lyqqvkmpdn ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . nfrpqyqicb
) , rtdwData , 0 , 28 , sizeof ( rtDW . nfrpqyqicb ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . kxqwml5tfx
) , rtdwData , 0 , 29 , sizeof ( rtDW . kxqwml5tfx ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . jxpofb2f25
) , rtdwData , 0 , 30 , sizeof ( rtDW . jxpofb2f25 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . mdgfrwm0ue
) , rtdwData , 0 , 31 , sizeof ( rtDW . mdgfrwm0ue ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . drdk50ofrw
) , rtdwData , 0 , 32 , sizeof ( rtDW . drdk50ofrw ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . ho0sx3ydv5
) , rtdwData , 0 , 33 , sizeof ( rtDW . ho0sx3ydv5 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . nerakhrzb5
) , rtdwData , 0 , 34 , sizeof ( rtDW . nerakhrzb5 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . j0b02r3oov
) , rtdwData , 0 , 35 , sizeof ( rtDW . j0b02r3oov ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . a4woko0313
) , rtdwData , 0 , 36 , sizeof ( rtDW . a4woko0313 ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . fhtms5vxtb
) , rtdwData , 0 , 37 , sizeof ( rtDW . fhtms5vxtb ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . gcbmowb40i
) , rtdwData , 0 , 38 , sizeof ( rtDW . gcbmowb40i ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . lb2eprmj4o
) , rtdwData , 0 , 39 , sizeof ( rtDW . lb2eprmj4o ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . gfj34s4ecr
) , rtdwData , 0 , 40 , sizeof ( rtDW . gfj34s4ecr ) ) ;
mr_iv_DetectObject_restoreDataFromMxArray ( ( void * ) & ( rtDW . lslyhe01co
) , rtdwData , 0 , 41 , sizeof ( rtDW . lslyhe01co ) ) ; for ( k0 = 0 ; k0 <
1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . nnxbi4fgqg [
k0 ] . h2z0k43iei ) , rtdwData , 0 , 42 , offset0 , sizeof ( rtDW .
nnxbi4fgqg [ 0 ] . h2z0k43iei ) ) ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . nnxbi4fgqg [
k0 ] . hvszrpwqhg ) , rtdwData , 0 , 43 , offset0 , sizeof ( rtDW .
nnxbi4fgqg [ 0 ] . hvszrpwqhg ) ) ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . nnxbi4fgqg [
k0 ] . hwqj4kmtdf ) , rtdwData , 0 , 44 , offset0 , sizeof ( rtDW .
nnxbi4fgqg [ 0 ] . hwqj4kmtdf ) ) ; for ( k1 = 0 ; k1 < 199 ; ++ k1 ) { const
mwIndex offset1 = k0 * 199 + k1 ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . nnxbi4fgqg [
k0 ] . nnxbi4fgqg [ k1 ] . mrjx3dkhpv ) , rtdwData , 0 , 45 , offset1 ,
sizeof ( rtDW . nnxbi4fgqg [ 0 ] . nnxbi4fgqg [ 0 ] . mrjx3dkhpv ) ) ; } }
for ( k0 = 0 ; k0 < 4 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . fmtja5mwec [
k0 ] . dpx4b1tifg ) , rtdwData , 0 , 46 , offset0 , sizeof ( rtDW .
fmtja5mwec [ 0 ] . dpx4b1tifg ) ) ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . fmtja5mwec [
k0 ] . jblghem2vo ) , rtdwData , 0 , 47 , offset0 , sizeof ( rtDW .
fmtja5mwec [ 0 ] . jblghem2vo ) ) ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . fmtja5mwec [
k0 ] . pya3jbutrr ) , rtdwData , 0 , 48 , offset0 , sizeof ( rtDW .
fmtja5mwec [ 0 ] . pya3jbutrr ) ) ;
mr_iv_DetectObject_restoreDataFromMxArrayWithOffset ( & ( rtDW . fmtja5mwec [
k0 ] . nnsvnkqyjy ) , rtdwData , 0 , 49 , offset0 , sizeof ( rtDW .
fmtja5mwec [ 0 ] . nnsvnkqyjy ) ) ; } } } mxArray *
mr_iv_DetectObject_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 164 ) ;
ssSetNumBlockIO ( rtS , 37 ) ; ssSetNumBlockParams ( rtS , 1584479 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3435749632U ) ; ssSetChecksumVal ( rtS , 1 ,
4099094283U ) ; ssSetChecksumVal ( rtS , 2 , 2573463099U ) ; ssSetChecksumVal
( rtS , 3 , 3550494824U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { void *
dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset
( dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void
) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 23 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } iv_DetectObject_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"iv_DetectObject" ) ; ssSetPath ( rtS , "iv_DetectObject" ) ; ssSetTStart (
rtS , 0.0 ) ; ssSetTFinal ( rtS , 30.0 ) ; ssSetStepSize ( rtS , 0.01 ) ;
ssSetFixedStepSize ( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 3 , 1 , 3 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 3 , 1 , 3 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 } ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [
] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{ "iv_DetectObject/Coordinates/Discrete-Time\nIntegrator" ,
"iv_DetectObject/Coordinates/Discrete-Time\nIntegrator1" ,
"iv_DetectObject/Encoder/Discrete-Time\nIntegrator" ,
"iv_DetectObject/Encoder/Discrete-Time\nIntegrator1" ,
"iv_DetectObject/Robot Simulator/Discrete-Time\nIntegrator" ,
"iv_DetectObject/Robot Simulator/Discrete-Time\nIntegrator1" ,
"iv_DetectObject/Robot Simulator/Discrete-Time\nIntegrator2" ,
"iv_DetectObject/LeftMotor/Discrete-Time\nIntegrator" ,
"iv_DetectObject/LeftMotor/Motor/Internal" ,
"iv_DetectObject/RightMotor/Discrete-Time\nIntegrator" ,
"iv_DetectObject/RightMotor/Motor/Internal" ,
"iv_DetectObject/Coordinates/Difference/UD" } ; static const char_T *
rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,
10 , 11 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 12 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 12 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . onlvei224w ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . jkf3nm3nbv ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . cquyyzdzbt ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . lrnmt0mvw5 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . bie05bd4ab ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . ni53pjisvf ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . b4bqgf4dhw ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . ihgcj0rg1c ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) rtDW . nqo0sx2y20 ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . n0rkvty3rm ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) rtDW . mtncgxqpgg ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . eenjimbo4a ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetNumNonContDerivSigInfos ( rtS , 0 ) ;
ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
3435749632U ) ; ssSetChecksumVal ( rtS , 1 , 4099094283U ) ; ssSetChecksumVal
( rtS , 2 , 2573463099U ) ; ssSetChecksumVal ( rtS , 3 , 3550494824U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 17 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_iv_DetectObject_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_iv_DetectObject_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_iv_DetectObject_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } ssSetNumSFunctions ( rtS , 1 ) ; { static SimStruct
childSFunctions [ 1 ] ; static SimStruct * childSFunctionPtrs [ 1 ] ; ( void
) memset ( ( void * ) & childSFunctions [ 0 ] , 0 , sizeof ( childSFunctions
) ) ; ssSetSFunctions ( rtS , & childSFunctionPtrs [ 0 ] ) ; ssSetSFunction (
rtS , 0 , & childSFunctions [ 0 ] ) ; { SimStruct * rts = ssGetSFunction (
rtS , 0 ) ; static time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ;
static int_T sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 ,
sizeof ( time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 ,
sizeof ( time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; { static struct _ssBlkInfo2 _blkInfo2 ; struct
_ssBlkInfo2 * blkInfo2 = & _blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ;
} { static struct _ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 =
& _portInfo2 ; _ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; }
ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; { static struct
_ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , & methods2 ) ; } {
static struct _ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , &
methods3 ) ; } { static struct _ssSFcnModelMethods4 methods4 ;
ssSetModelMethods4 ( rts , & methods4 ) ; } { static struct _ssStatesInfo2
statesInfo2 ; static ssPeriodicStatesInfo periodicStatesInfo ; static
ssJacobianPerturbationBounds jacPerturbationBounds ; ssSetStatesInfo2 ( rts ,
& statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; }
ssSetModelName ( rts , "sfun_time" ) ; ssSetPath ( rts ,
"iv_DetectObject/Robot Simulator/Soft Real Time" ) ; if ( ssGetRTModel ( rtS
) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ; ssSetRootSS ( rts ,
ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts , ssGetRTModel ( rtS ) )
; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts , rts ) ; }
ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static mxArray *
sfcnParams [ 1 ] ; ssSetSFcnParamsCount ( rts , 1 ) ; ssSetSFcnParamsPtr (
rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 , ( mxArray * ) rtP .
SoftRealTime_P1_Size ) ; } ssSetRWork ( rts , ( real_T * ) & rtDW .
cl001iwg3i ) ; { static struct _ssDWorkRecord dWorkRecord [ 1 ] ; static
struct _ssDWorkAuxRecord dWorkAuxRecord [ 1 ] ; ssSetSFcnDWork ( rts ,
dWorkRecord ) ; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ;
ssSetNumDWorkAsInt ( rts , 1 ) ; ssSetDWorkWidthAsInt ( rts , 0 , 1 ) ;
ssSetDWorkDataType ( rts , 0 , SS_DOUBLE ) ; ssSetDWorkComplexSignal ( rts ,
0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW . cl001iwg3i ) ; } {
raccelLoadSFcnMexFile ( "sfun_time" , "iv_DetectObject:4:401" , rts , 0 ) ;
if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } } sfcnInitializeSampleTimes
( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ; ssSetOffsetTime ( rts , 0 , 0.0
) ; sfcnTsMap [ 0 ] = 0 ; ssSetNumNonsampledZCsAsInt ( rts , 0 ) ; } } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
