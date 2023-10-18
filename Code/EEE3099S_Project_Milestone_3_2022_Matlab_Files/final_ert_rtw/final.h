#include "__cf_final.h"
#ifndef RTW_HEADER_final_h_
#define RTW_HEADER_final_h_
#ifndef final_COMMON_INCLUDES_
#define final_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#include "MW_AnalogIn.h"
#endif
#include "final_types.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include <string.h>
#include "MW_target_hardware_resources.h"
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif
#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val) ((rtm)->errorStatus = (val))
#endif
#define final_M (psduok44te)
typedef struct { boolean_T bv [ _hFH18b1_cbAsGC1Ai0ovX1 ] ; boolean_T bv1 [
_hFH18b1_cbAsGC1Ai0ovX1 ] ; MW_AnalogIn_ResultDataType_Type datatype_id ;
real_T hu4pj3gbtt ; real_T caibemhjz0 ; real_T pugqe3fhvd ; real_T hdbdedhash
; real_T bi2osrvy5h ; real_T oiuzhzigzu ; real_T erlsdlvxgb ; real_T
ec34jv0gez_mbvzarwird ; real_T bg52i30lwq_cl54gopm0x ; real_T
id2virtv4v_idx_0 ; real_T u0 ; real_T r ; real_T b_x ; boolean_T lwklfvrmoo [
_g7WFphbd05O6bEjctOzUc1 ] ; } ancvnhcdfx ; typedef struct { etu23ydspi
axdbkmytzr ; etu23ydspi pwvj5v5f5o ; etu23ydspi achvv4bgxx ; etu23ydspi
gwwponetui ; hyxyxmk155 fave25vlau ; hyxyxmk155 kpbernuafa ; d3j1xkppvv
mfkvrqhpz2 ; d3j1xkppvv ltd1boammo ; d3j1xkppvv lpxmqhm1ds ; d3j1xkppvv
g54vdmiuvo ; d3j1xkppvv pgpbu1y1dy ; d3j1xkppvv daox43lqzl ; d3j1xkppvv
mdmzkkdxqm ; d3j1xkppvv iwfuskdwuz ; jcgfwaahsx ocug4my4qn ; jcgfwaahsx
mgwntjm0gv ; real_T e1xzdl3dhx ; real_T onm3fy2bog ; real_T hjjgiuizc3 ;
real_T m4dhdveigb ; real_T lxnqcuqrpi ; real_T fn1opmgv0i ; real_T gao00lrcwa
; real_T dwqphkvnld ; real_T ogpiiavbpe ; real_T cqffu0so1f ; real_T
ffv25nxfoc ; real_T l2o4a3ld03 [ _bOgtWVY1vhek6BjvWIguu2 ] ; real_T
ktiouwetz4 ; real_T bxhdeprqdo ; real_T jpimtswh4s ; real_T lutz3esajt ;
boolean_T csdp5kspyw ; boolean_T gfsjobi15k ; uint8_T a1yo0axpep ; uint8_T
g2dtldrvjh ; uint8_T bgmmma2ge1 ; boolean_T jqotv0k0bl ; boolean_T drv0vtjunm
; boolean_T i3sovdpaob ; boolean_T g0lesxy2ax ; boolean_T nusygbj0kr ;
boolean_T ca1m4ovis0 ; boolean_T ga41kjngtq ; boolean_T bv2fkwkuyf ;
boolean_T jqdazvs1q0 ; boolean_T dnt0uqvfyo ; boolean_T djvbfuknfc ;
boolean_T nzvjatox1q ; boolean_T g3uejoru51 ; boolean_T dktp1stppf ;
boolean_T o0tzvx445r ; boolean_T fyvbsrlqxc ; boolean_T bl5kbcqgnu ;
boolean_T p4iv1y0o0n ; } cquffkfpix ; struct dhfztme0zwb_ { real_T
Towlwr_wheelR ; uint16_T CompareToConstant_const ; uint16_T
CompareToConstant1_const ; uint16_T CompareToConstant2_const ; uint16_T
CompareToConstant3_const ; boolean_T DetectIncrease_vinit ; boolean_T
DetectIncrease1_vinit ; real_T AnalogInput_SampleTime ; real_T
AnalogInput1_SampleTime ; real_T AnalogInput2_SampleTime ; real_T
AnalogInput3_SampleTime ; real_T DigitalInput1_SampleTime ; real_T
DigitalInput2_SampleTime ; real_T Constant6_Value ; real_T Constant2_Value ;
real_T Constant1_Value ; real_T Constant_Value ; real_T
Constant2_Value_bweh1erc23 ; real_T Constant3_Value ; real_T
Constant6_Value_a523d0oiup ; real_T Constant1_Value_mjcewfmkf5 ; real_T
Constant3_Value_fgxealk4dn ; real_T Constant1_Value_ijxamwyxru ; real_T
Constant4_Value ; real_T Constant5_Value ; real_T Constant_Value_fqq1ckc0wv ;
real_T Constant_Value_k4dabohuvk ; real_T Constant_Value_oildrrfjo5 ; real_T
Constant_Value_pdjfkalu0y ; real_T Constant_Value_kw5w4qkv5v ; real_T
Constant_Value_c1zfghbdbg ; real_T Accumulator_gainval ; real_T
Accumulator_IC ; real_T Accumulator1_gainval ; real_T Accumulator1_IC ;
real_T Constant_Value_b30yrfqjfy ; real_T changeparameters_Gain [
_g7WFphbd05O6bEjctOzUc1 ] ; real_T Switch_Threshold ; real_T
Switch1_Threshold ; } ; struct ffibhtyqvw { const char_T * errorStatus ; } ;
extern dhfztme0zwb dhfztme0zw ; extern ancvnhcdfx ancvnhcdfxp ; extern
cquffkfpix cquffkfpixa ; extern void final_initialize ( void ) ; extern void
final_step ( void ) ; extern void final_terminate ( void ) ; extern
euoog1ucnp * const psduok44te ; extern volatile boolean_T stopRequested ;
extern volatile boolean_T runModel ;
#endif
