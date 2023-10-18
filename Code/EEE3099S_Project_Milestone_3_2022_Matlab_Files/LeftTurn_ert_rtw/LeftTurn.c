#include "__cf_LeftTurn.h"
#include "LeftTurn.h"
#include "rtwtypes.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#define a2l5rcg4p1 ((uint8_T)_Q57wSwWr0SJv2TgIW51tW0)
#define cjoq2h42jj ((uint8_T)_Sg6sTng54mEE0kZ3dtta7_)
#define d5ympwblam ((uint8_T)_YZXs6PIOIPQja4xAu4A1F0)
#define e22wt15lsv ((uint8_T)_e9A_g7gxoUOnv_bONS2N82)
#define edgvw11wwx ((uint8_T)__TFoSzUJk_dMsKlS7CQKa2)
#define gzrlx55dtq ((uint8_T)_OnGbDvPAlR28i1EHJ77W50)
#define hf4ebzdwbe ((uint8_T)_GJurNUnrpS80cGgiENVUu0)
#define hhzhtjefh1 ((uint8_T)_JOBvFzeL69eFmT1ArYYQ_2)
#define iqovbcayzx ((uint8_T)_TlYaTpHyOy3h9kx50A0_s2)
#define kafc5z0mk1 ((uint8_T)_p9NLwThCzup4niQAWdkZg2)
#define kuh3ozcp2n ((uint8_T)_adIvhU0RnuIA4D0WIl3KX0)
#define l0rzrcmaf1 ((uint8_T)_y7_mpHSPCt2D2LUfgt0sB0)
#define lrgjasouue ((uint8_T)_p1ZMcYujXmC1ks3HAHIPa0)
#define m0rcdjmavc ((uint8_T)_L2FFn59LhHpwm6KN7tjmz1)
#define mihb4dqmjh ((uint8_T)_TPQ_vWWUSL7ze3htINC_W2)
ifo1kqiubp ifo1kqiubpm ; ia3x4slpbv ia3x4slpbv5 ; static flgpwyffo0
iv5ib1xm45_ ; flgpwyffo0 * const iv5ib1xm45 = & iv5ib1xm45_ ; void
LeftTurn_step ( void ) { MW_AnalogIn_ResultDataType_Type datatype_id ; real_T
dha5ldf3gw ; real_T idw20f5qjd ; real_T k23wpg3s0e ; real_T omlvmqnbkg ;
int32_T gxcrhyekwq_idx_2 ; uint32_T duration ; uint16_T b_varargout_1 ;
uint16_T b_varargout_1_p ; boolean_T cc5bpcthtu [ _g7WFphbd05O6bEjctOzUc1 ] ;
boolean_T do4cd1hqvw ; boolean_T dq3tyusrna ; boolean_T e2opcvlw3z ;
boolean_T ep31jwoq3i ; boolean_T exitg1 ; dha5ldf3gw = ia3x4slpbv5 .
eztp5mft1s + ia3x4slpbv5 . ivperkbebl ; k23wpg3s0e = ia3x4slpbv5 . ivperkbebl
- ia3x4slpbv5 . eztp5mft1s ; if ( ia3x4slpbv5 . ltfem5eqqj .
TunablePropsChanged ) { ia3x4slpbv5 . ltfem5eqqj . TunablePropsChanged =
false ; } MW_UltrasonicRead ( & duration , _QHNSjd8JBrVVYZAcs7Zm32 ,
_RAQgyWVtpyqfEVcLRZFTL_ , _2KXuAphrqc_TLcinUGD4E1 , _IjHdoOm5hGk4VAbwwsvcL1 )
; omlvmqnbkg = ( real_T ) duration * _2eXt4p8fMCVYRHz1qxFKi0 /
_IfqgJOo_0kGGrK4yerXJx_ ; if ( ia3x4slpbv5 . ia5cgvcy1z . SampleTime !=
i5w14emkxk . AnalogInput_SampleTime ) { ia3x4slpbv5 . ia5cgvcy1z . SampleTime
= i5w14emkxk . AnalogInput_SampleTime ; } ia3x4slpbv5 . ia5cgvcy1z .
AnalogInDriverObj . MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle (
_emIIW_7YN0QOZ3WhxvJi41 ) ; datatype_id = MW_ANALOGIN_UINT16 ;
MW_AnalogInSingle_ReadResult ( ia3x4slpbv5 . ia5cgvcy1z . AnalogInDriverObj .
MW_ANALOGIN_HANDLE , & b_varargout_1 , datatype_id ) ; e2opcvlw3z = (
b_varargout_1 >= i5w14emkxk . CompareToConstant_const ) ; if ( ia3x4slpbv5 .
eu02mzzlfp . SampleTime != i5w14emkxk . AnalogInput1_SampleTime ) {
ia3x4slpbv5 . eu02mzzlfp . SampleTime = i5w14emkxk . AnalogInput1_SampleTime
; } ia3x4slpbv5 . eu02mzzlfp . AnalogInDriverObj . MW_ANALOGIN_HANDLE =
MW_AnalogIn_GetHandle ( _xPMRP5xoInnnSDqQdAB_p2 ) ; datatype_id =
MW_ANALOGIN_UINT16 ; MW_AnalogInSingle_ReadResult ( ia3x4slpbv5 . eu02mzzlfp
. AnalogInDriverObj . MW_ANALOGIN_HANDLE , & b_varargout_1_p , datatype_id )
; ep31jwoq3i = ( b_varargout_1_p >= i5w14emkxk . CompareToConstant1_const ) ;
if ( ia3x4slpbv5 . aoccxoxn5t . SampleTime != i5w14emkxk .
AnalogInput2_SampleTime ) { ia3x4slpbv5 . aoccxoxn5t . SampleTime =
i5w14emkxk . AnalogInput2_SampleTime ; } ia3x4slpbv5 . aoccxoxn5t .
AnalogInDriverObj . MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle (
_8Ew6t8ZE5Di8prqlF9sWH1 ) ; datatype_id = MW_ANALOGIN_UINT16 ;
MW_AnalogInSingle_ReadResult ( ia3x4slpbv5 . aoccxoxn5t . AnalogInDriverObj .
MW_ANALOGIN_HANDLE , & b_varargout_1_p , datatype_id ) ; do4cd1hqvw = (
b_varargout_1_p >= i5w14emkxk . CompareToConstant2_const ) ; if ( ia3x4slpbv5
. mk3xlugtq0 . SampleTime != i5w14emkxk . AnalogInput3_SampleTime ) {
ia3x4slpbv5 . mk3xlugtq0 . SampleTime = i5w14emkxk . AnalogInput3_SampleTime
; } ia3x4slpbv5 . mk3xlugtq0 . AnalogInDriverObj . MW_ANALOGIN_HANDLE =
MW_AnalogIn_GetHandle ( _zlKlRt9I4NG2G2aasiN8o_ ) ; datatype_id =
MW_ANALOGIN_UINT16 ; MW_AnalogInSingle_ReadResult ( ia3x4slpbv5 . mk3xlugtq0
. AnalogInDriverObj . MW_ANALOGIN_HANDLE , & b_varargout_1_p , datatype_id )
; dq3tyusrna = ( b_varargout_1_p >= i5w14emkxk . CompareToConstant3_const ) ;
cc5bpcthtu [ _PIqWtbzrbQqv_KS_31HnE2 ] = ( b_varargout_1 >= i5w14emkxk .
CompareToConstant_const ) ; cc5bpcthtu [ _QHNSjd8JBrVVYZAcs7Zm32 ] =
ep31jwoq3i ; cc5bpcthtu [ _gN74BbsU5wqNjkJbC9b672 ] = do4cd1hqvw ; cc5bpcthtu
[ _nfvdmbxYkVXzXnpHyWwmg2 ] = ( b_varargout_1_p >= i5w14emkxk .
CompareToConstant3_const ) ; if ( ia3x4slpbv5 . aqxdlnsdy3 <
_4HSpUjqptepzMKT_TnJjq_ ) { ia3x4slpbv5 . aqxdlnsdy3 ++ ; } if ( ia3x4slpbv5
. pavnexpku2 == _TPQ_vWWUSL7ze3htINC_W2 ) { ia3x4slpbv5 . pavnexpku2 =
_TlYaTpHyOy3h9kx50A0_s2 ; ia3x4slpbv5 . plyhg0pn3d = d5ympwblam ; ia3x4slpbv5
. hxkezaxr5r = _Z77Ee2RGrs6HvPP38e_Kk_ ; for ( gxcrhyekwq_idx_2 =
_PIqWtbzrbQqv_KS_31HnE2 ; gxcrhyekwq_idx_2 < _7rQuZHd0xqhm1dUIKVK3P1 ;
gxcrhyekwq_idx_2 ++ ) { ia3x4slpbv5 . g0uhu3fgko [ gxcrhyekwq_idx_2 ] =
_p01KwLUrlxQyp_iCq4iLA2 ; } ia3x4slpbv5 . i2kvelbbhw =
_p01KwLUrlxQyp_iCq4iLA2 ; } else { switch ( ia3x4slpbv5 . plyhg0pn3d ) { case
iqovbcayzx : if ( dha5ldf3gw > ia3x4slpbv5 . bulljvefi4 ) { ia3x4slpbv5 .
plyhg0pn3d = a2l5rcg4p1 ; ifo1kqiubpm . oz2u2klmwy = _6QUc5ljzVM0P5aZxBDzyJ0
; ia3x4slpbv5 . jj1c410k45 = k23wpg3s0e + _JR5KyK2iK6fP1C0gnlyBF_ ; } break ;
case gzrlx55dtq : ia3x4slpbv5 . plyhg0pn3d = m0rcdjmavc ; ifo1kqiubpm .
oz2u2klmwy = _6QUc5ljzVM0P5aZxBDzyJ0 ; ia3x4slpbv5 . jj1c410k45 = k23wpg3s0e
+ _kY9WF_DZ6jfb_5SiKJOOl1 ; break ; case e22wt15lsv : e2opcvlw3z = !
e2opcvlw3z ; dq3tyusrna = ! dq3tyusrna ; if ( e2opcvlw3z || dq3tyusrna ) { if
( e2opcvlw3z && dq3tyusrna ) { ia3x4slpbv5 . plyhg0pn3d = l0rzrcmaf1 ;
ifo1kqiubpm . oz2u2klmwy = _p01KwLUrlxQyp_iCq4iLA2 ; ia3x4slpbv5 . bulljvefi4
= dha5ldf3gw + _vxH0fycxwbDhgIMP9kivM0 ; } else { ia3x4slpbv5 . plyhg0pn3d =
iqovbcayzx ; ifo1kqiubpm . oz2u2klmwy = _p01KwLUrlxQyp_iCq4iLA2 ; ia3x4slpbv5
. bulljvefi4 = dha5ldf3gw + _SniB944JVurX__lC8AXIE1 ; } } else { dq3tyusrna =
true ; gxcrhyekwq_idx_2 = _PIqWtbzrbQqv_KS_31HnE2 ; exitg1 = false ; while (
( ! exitg1 ) && ( gxcrhyekwq_idx_2 < _g7WFphbd05O6bEjctOzUc1 ) ) { if ( !
cc5bpcthtu [ gxcrhyekwq_idx_2 ] ) { dq3tyusrna = false ; exitg1 = true ; }
else { gxcrhyekwq_idx_2 ++ ; } } if ( dq3tyusrna ) { ia3x4slpbv5 . plyhg0pn3d
= m0rcdjmavc ; ifo1kqiubpm . oz2u2klmwy = _6QUc5ljzVM0P5aZxBDzyJ0 ;
ia3x4slpbv5 . jj1c410k45 = k23wpg3s0e + _kY9WF_DZ6jfb_5SiKJOOl1 ; } } break ;
case hf4ebzdwbe : if ( ( ! e2opcvlw3z ) && ( ! dq3tyusrna ) ) { ifo1kqiubpm .
oz2u2klmwy = __HOkNYCCIgIkrPMzfarLc2 ; if ( ( omlvmqnbkg !=
_Z77Ee2RGrs6HvPP38e_Kk_ ) && ( omlvmqnbkg < _IE_h0ySUMKhEY_mtQbaOn_ ) ) { if
( ia3x4slpbv5 . hxkezaxr5r == _IfqgJOo_0kGGrK4yerXJx_ ) { if ( fabs (
omlvmqnbkg - ia3x4slpbv5 . mouz345o2e ) <= _99jyRU8o2WsU23VA0tScQ0 ) {
ia3x4slpbv5 . aqxdlnsdy3 = _TPQ_vWWUSL7ze3htINC_W2 ; ia3x4slpbv5 . plyhg0pn3d
= kafc5z0mk1 ; ia3x4slpbv5 . oi20fvil4f = _Z77Ee2RGrs6HvPP38e_Kk_ ; } else {
ia3x4slpbv5 . plyhg0pn3d = m0rcdjmavc ; ifo1kqiubpm . oz2u2klmwy =
_6QUc5ljzVM0P5aZxBDzyJ0 ; ia3x4slpbv5 . jj1c410k45 = k23wpg3s0e +
_kY9WF_DZ6jfb_5SiKJOOl1 ; } } else { ia3x4slpbv5 . plyhg0pn3d = edgvw11wwx ;
ia3x4slpbv5 . g0uhu3fgko [ ( int32_T ) ia3x4slpbv5 . i2kvelbbhw -
_QHNSjd8JBrVVYZAcs7Zm32 ] = omlvmqnbkg ; ia3x4slpbv5 . i2kvelbbhw ++ ; } }
else { ia3x4slpbv5 . plyhg0pn3d = iqovbcayzx ; ifo1kqiubpm . oz2u2klmwy =
_p01KwLUrlxQyp_iCq4iLA2 ; ia3x4slpbv5 . bulljvefi4 = dha5ldf3gw +
_SniB944JVurX__lC8AXIE1 ; } } break ; case l0rzrcmaf1 : if ( dha5ldf3gw >
ia3x4slpbv5 . bulljvefi4 ) { ia3x4slpbv5 . hxkezaxr5r ++ ; if ( ia3x4slpbv5 .
hxkezaxr5r == _IfqgJOo_0kGGrK4yerXJx_ ) { ia3x4slpbv5 . plyhg0pn3d =
gzrlx55dtq ; ia3x4slpbv5 . mouz345o2e = _p01KwLUrlxQyp_iCq4iLA2 ; for (
gxcrhyekwq_idx_2 = _PIqWtbzrbQqv_KS_31HnE2 ; gxcrhyekwq_idx_2 <
_KYlcoOk9rSSGYswizhYqZ2 ; gxcrhyekwq_idx_2 ++ ) { dha5ldf3gw = ia3x4slpbv5 .
g0uhu3fgko [ gxcrhyekwq_idx_2 ] ; if ( dha5ldf3gw < ia3x4slpbv5 . mouz345o2e
) { ia3x4slpbv5 . mouz345o2e = dha5ldf3gw ; } } } else if ( ia3x4slpbv5 .
hxkezaxr5r > _IfqgJOo_0kGGrK4yerXJx_ ) { ia3x4slpbv5 . plyhg0pn3d =
cjoq2h42jj ; ifo1kqiubpm . oz2u2klmwy = _6QUc5ljzVM0P5aZxBDzyJ0 ; } else {
ia3x4slpbv5 . plyhg0pn3d = m0rcdjmavc ; ifo1kqiubpm . oz2u2klmwy =
_6QUc5ljzVM0P5aZxBDzyJ0 ; ia3x4slpbv5 . jj1c410k45 = k23wpg3s0e +
_kY9WF_DZ6jfb_5SiKJOOl1 ; } } else if ( e2opcvlw3z && dq3tyusrna ) {
ia3x4slpbv5 . plyhg0pn3d = hf4ebzdwbe ; ifo1kqiubpm . oz2u2klmwy =
_IfqgJOo_0kGGrK4yerXJx_ ; } break ; case cjoq2h42jj : case hhzhtjefh1 : break
; case a2l5rcg4p1 : if ( k23wpg3s0e > ia3x4slpbv5 . jj1c410k45 ) {
ia3x4slpbv5 . plyhg0pn3d = kuh3ozcp2n ; ifo1kqiubpm . oz2u2klmwy =
_gRxA9alHNhjhzZOUqgB3I2 ; } break ; case lrgjasouue : if ( ia3x4slpbv5 .
oi20fvil4f > _6QUc5ljzVM0P5aZxBDzyJ0 ) { ia3x4slpbv5 . plyhg0pn3d =
hhzhtjefh1 ; ifo1kqiubpm . oz2u2klmwy = __HOkNYCCIgIkrPMzfarLc2 ; } else {
ifo1kqiubpm . oz2u2klmwy = _p01KwLUrlxQyp_iCq4iLA2 ; if ( ia3x4slpbv5 .
aqxdlnsdy3 >= _e9A_g7gxoUOnv_bONS2N82 ) { ifo1kqiubpm . oz2u2klmwy =
__HOkNYCCIgIkrPMzfarLc2 ; ia3x4slpbv5 . aqxdlnsdy3 = _TPQ_vWWUSL7ze3htINC_W2
; ia3x4slpbv5 . oi20fvil4f ++ ; } } break ; case kafc5z0mk1 : if (
ia3x4slpbv5 . aqxdlnsdy3 >= _oiD7SXv_3jKjTdBFKo6Zr_ ) { ifo1kqiubpm .
oz2u2klmwy = __HOkNYCCIgIkrPMzfarLc2 ; ia3x4slpbv5 . plyhg0pn3d = lrgjasouue
; ia3x4slpbv5 . aqxdlnsdy3 = _TPQ_vWWUSL7ze3htINC_W2 ; ia3x4slpbv5 .
oi20fvil4f ++ ; } break ; case kuh3ozcp2n : if ( ! ep31jwoq3i ) { ia3x4slpbv5
. plyhg0pn3d = e22wt15lsv ; ifo1kqiubpm . oz2u2klmwy =
_Z77Ee2RGrs6HvPP38e_Kk_ ; } break ; case d5ympwblam : ia3x4slpbv5 .
plyhg0pn3d = e22wt15lsv ; ifo1kqiubpm . oz2u2klmwy = _Z77Ee2RGrs6HvPP38e_Kk_
; break ; case m0rcdjmavc : if ( k23wpg3s0e > ia3x4slpbv5 . jj1c410k45 ) {
ia3x4slpbv5 . plyhg0pn3d = e22wt15lsv ; ifo1kqiubpm . oz2u2klmwy =
_Z77Ee2RGrs6HvPP38e_Kk_ ; } break ; default : ia3x4slpbv5 . plyhg0pn3d =
m0rcdjmavc ; ifo1kqiubpm . oz2u2klmwy = _6QUc5ljzVM0P5aZxBDzyJ0 ; ia3x4slpbv5
. jj1c410k45 = k23wpg3s0e + _kY9WF_DZ6jfb_5SiKJOOl1 ; break ; } } duration =
( uint32_T ) ifo1kqiubpm . oz2u2klmwy >> _TlYaTpHyOy3h9kx50A0_s2 ;
gxcrhyekwq_idx_2 = ( int32_T ) ( duration & _TlYaTpHyOy3h9kx50A0_s2 ) ;
duration >>= _TlYaTpHyOy3h9kx50A0_s2 ; writeDigitalPin (
_pvLCxI2EN_CBKSZyVB_P02 , ( uint8_T ) ( ( uint32_T ) ifo1kqiubpm . oz2u2klmwy
& _TlYaTpHyOy3h9kx50A0_s2 ) ) ; writeDigitalPin ( _hCXUd_x6pbKZfXtyKXEw82 , (
uint8_T ) ( duration >> _TlYaTpHyOy3h9kx50A0_s2 & _TlYaTpHyOy3h9kx50A0_s2 ) )
; writeDigitalPin ( _t0CSRdt0cj28FWcY3kSLw_ , ( uint8_T ) gxcrhyekwq_idx_2 )
; writeDigitalPin ( _9rHO1ek1Om1saeRq2pf3_0 , ( uint8_T ) ( duration &
_TlYaTpHyOy3h9kx50A0_s2 ) ) ; if ( ia3x4slpbv5 . lel0yh1asg ==
_TPQ_vWWUSL7ze3htINC_W2 ) { ia3x4slpbv5 . lel0yh1asg =
_TlYaTpHyOy3h9kx50A0_s2 ; } else { ifo1kqiubpm . b3tr21kgcj = ( ( real_T )
do4cd1hqvw - ( real_T ) ep31jwoq3i ) * i5w14emkxk . Constant_Value_opouedc3dv
; } switch ( ( int32_T ) ifo1kqiubpm . oz2u2klmwy ) { case
_PIqWtbzrbQqv_KS_31HnE2 : if ( ifo1kqiubpm . b3tr21kgcj == i5w14emkxk .
Constant_Value_fqrpfjqhfg ) { omlvmqnbkg = i5w14emkxk .
Constant1_Value_dovcbbjwsu ; } else { omlvmqnbkg = i5w14emkxk .
Constant3_Value_obzhygnvxx ; } break ; case _QHNSjd8JBrVVYZAcs7Zm32 :
omlvmqnbkg = i5w14emkxk . Constant7_Value ; break ; case
_gN74BbsU5wqNjkJbC9b672 : omlvmqnbkg = i5w14emkxk .
Constant1_Value_ah0pp224du ; break ; case _nfvdmbxYkVXzXnpHyWwmg2 :
omlvmqnbkg = i5w14emkxk . Constant4_Value ; break ; case
_g7WFphbd05O6bEjctOzUc1 : omlvmqnbkg = i5w14emkxk . Constant5_Value ; break ;
default : omlvmqnbkg = i5w14emkxk . Constant10_Value ; break ; } switch ( (
int32_T ) ifo1kqiubpm . oz2u2klmwy ) { case _PIqWtbzrbQqv_KS_31HnE2 :
idw20f5qjd = ifo1kqiubpm . b3tr21kgcj ; break ; case _QHNSjd8JBrVVYZAcs7Zm32
: idw20f5qjd = i5w14emkxk . Constant2_Value_a1crlzduby ; break ; case
_gN74BbsU5wqNjkJbC9b672 : idw20f5qjd = i5w14emkxk . Constant8_Value ; break ;
case _nfvdmbxYkVXzXnpHyWwmg2 : idw20f5qjd = i5w14emkxk . Constant3_Value ;
break ; case _g7WFphbd05O6bEjctOzUc1 : idw20f5qjd = i5w14emkxk .
Constant6_Value_ihbzrbcjcd ; break ; default : idw20f5qjd = i5w14emkxk .
Constant9_Value ; break ; } k23wpg3s0e = _p01KwLUrlxQyp_iCq4iLA2 / i5w14emkxk
. Towlwr_wheelR ; dha5ldf3gw = ( i5w14emkxk . changeparameters_Gain [
_PIqWtbzrbQqv_KS_31HnE2 ] * omlvmqnbkg + i5w14emkxk . changeparameters_Gain [
_gN74BbsU5wqNjkJbC9b672 ] * idw20f5qjd ) * k23wpg3s0e ; omlvmqnbkg = (
i5w14emkxk . changeparameters_Gain [ _QHNSjd8JBrVVYZAcs7Zm32 ] * omlvmqnbkg +
i5w14emkxk . changeparameters_Gain [ _nfvdmbxYkVXzXnpHyWwmg2 ] * idw20f5qjd )
* k23wpg3s0e ; ia3x4slpbv5 . gw2gv55s2g . PWMDriverObj . MW_PWM_HANDLE =
MW_PWM_GetHandle ( _OnGbDvPAlR28i1EHJ77W50 ) ; k23wpg3s0e = fabs ( dha5ldf3gw
) ; if ( ! ( k23wpg3s0e <= _TX0w66L1XZtKXwhz3nT5Q0 ) ) { k23wpg3s0e =
_TX0w66L1XZtKXwhz3nT5Q0 ; } MW_PWM_SetDutyCycle ( ia3x4slpbv5 . gw2gv55s2g .
PWMDriverObj . MW_PWM_HANDLE , k23wpg3s0e ) ; writeDigitalPin (
_QHNSjd8JBrVVYZAcs7Zm32 , ( uint8_T ) ( dha5ldf3gw >= i5w14emkxk .
Constant_Value_flfgzk5ppo ) ) ; writeDigitalPin ( _PIqWtbzrbQqv_KS_31HnE2 , (
uint8_T ) ( dha5ldf3gw <= i5w14emkxk . Constant_Value_iaztzyrqsn ) ) ;
ia3x4slpbv5 . doetqvvt4d . PWMDriverObj . MW_PWM_HANDLE = MW_PWM_GetHandle (
_e9A_g7gxoUOnv_bONS2N82 ) ; k23wpg3s0e = fabs ( omlvmqnbkg ) ; if ( ! (
k23wpg3s0e <= _TX0w66L1XZtKXwhz3nT5Q0 ) ) { k23wpg3s0e =
_TX0w66L1XZtKXwhz3nT5Q0 ; } MW_PWM_SetDutyCycle ( ia3x4slpbv5 . doetqvvt4d .
PWMDriverObj . MW_PWM_HANDLE , k23wpg3s0e ) ; writeDigitalPin (
_KYlcoOk9rSSGYswizhYqZ2 , ( uint8_T ) ( omlvmqnbkg <= i5w14emkxk .
Constant_Value_pzmlvpncn1 ) ) ; writeDigitalPin ( _g7WFphbd05O6bEjctOzUc1 , (
uint8_T ) ( omlvmqnbkg >= i5w14emkxk . Constant_Value_ouuylrsk2d ) ) ; if (
ia3x4slpbv5 . pqp0hb4acc . SampleTime != i5w14emkxk .
DigitalInput1_SampleTime ) { ia3x4slpbv5 . pqp0hb4acc . SampleTime =
i5w14emkxk . DigitalInput1_SampleTime ; } ep31jwoq3i = readDigitalPin (
_aoel664zPcTjzpXADn7l40 ) ; if ( ia3x4slpbv5 . nmf1q0pxpd . SampleTime !=
i5w14emkxk . DigitalInput2_SampleTime ) { ia3x4slpbv5 . nmf1q0pxpd .
SampleTime = i5w14emkxk . DigitalInput2_SampleTime ; } do4cd1hqvw =
readDigitalPin ( _IjHdoOm5hGk4VAbwwsvcL1 ) ; if ( dha5ldf3gw >= i5w14emkxk .
Switch_Threshold ) { k23wpg3s0e = i5w14emkxk . Constant1_Value ; } else {
k23wpg3s0e = i5w14emkxk . Constant_Value ; } ia3x4slpbv5 . eztp5mft1s += (
real_T ) ( ( int32_T ) ep31jwoq3i > ( int32_T ) ia3x4slpbv5 . gh2cwdfx4o ) *
k23wpg3s0e * i5w14emkxk . Accumulator_gainval ; if ( omlvmqnbkg >= i5w14emkxk
. Switch1_Threshold ) { k23wpg3s0e = i5w14emkxk . Constant6_Value ; } else {
k23wpg3s0e = i5w14emkxk . Constant2_Value ; } ia3x4slpbv5 . ivperkbebl += (
real_T ) ( ( int32_T ) do4cd1hqvw > ( int32_T ) ia3x4slpbv5 . mth4saxzur ) *
k23wpg3s0e * i5w14emkxk . Accumulator1_gainval ; ia3x4slpbv5 . gh2cwdfx4o =
ep31jwoq3i ; ia3x4slpbv5 . mth4saxzur = do4cd1hqvw ; } void
LeftTurn_initialize ( void ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ;
rtmSetErrorStatus ( iv5ib1xm45 , ( NULL ) ) ; ( void ) memset ( ( ( void * )
& ifo1kqiubpm ) , _PIqWtbzrbQqv_KS_31HnE2 , sizeof ( ifo1kqiubp ) ) ; ( void
) memset ( ( void * ) & ia3x4slpbv5 , _PIqWtbzrbQqv_KS_31HnE2 , sizeof (
ia3x4slpbv ) ) ; ia3x4slpbv5 . o3riwi4qj4 = true ; ia3x4slpbv5 . ltfem5eqqj .
isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ; MW_UltrasonicSetup (
_RAQgyWVtpyqfEVcLRZFTL_ , _2KXuAphrqc_TLcinUGD4E1 ) ; ia3x4slpbv5 .
ltfem5eqqj . TunablePropsChanged = false ; ia3x4slpbv5 . ia5cgvcy1z .
matlabCodegenIsDeleted = false ; ia3x4slpbv5 . inn03sbcvd = true ;
ia3x4slpbv5 . ia5cgvcy1z . SampleTime = i5w14emkxk . AnalogInput_SampleTime ;
ia3x4slpbv5 . ia5cgvcy1z . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
ia3x4slpbv5 . ia5cgvcy1z . AnalogInDriverObj . MW_ANALOGIN_HANDLE =
MW_AnalogInSingle_Open ( _emIIW_7YN0QOZ3WhxvJi41 ) ; ia3x4slpbv5 . ia5cgvcy1z
. isSetupComplete = true ; ia3x4slpbv5 . eu02mzzlfp . matlabCodegenIsDeleted
= false ; ia3x4slpbv5 . k015pn2a3l = true ; ia3x4slpbv5 . eu02mzzlfp .
SampleTime = i5w14emkxk . AnalogInput1_SampleTime ; ia3x4slpbv5 . eu02mzzlfp
. isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ; ia3x4slpbv5 . eu02mzzlfp .
AnalogInDriverObj . MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open (
_xPMRP5xoInnnSDqQdAB_p2 ) ; ia3x4slpbv5 . eu02mzzlfp . isSetupComplete = true
; ia3x4slpbv5 . aoccxoxn5t . matlabCodegenIsDeleted = false ; ia3x4slpbv5 .
oucbk3sitk = true ; ia3x4slpbv5 . aoccxoxn5t . SampleTime = i5w14emkxk .
AnalogInput2_SampleTime ; ia3x4slpbv5 . aoccxoxn5t . isInitialized =
_QHNSjd8JBrVVYZAcs7Zm32 ; ia3x4slpbv5 . aoccxoxn5t . AnalogInDriverObj .
MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open ( _8Ew6t8ZE5Di8prqlF9sWH1 ) ;
ia3x4slpbv5 . aoccxoxn5t . isSetupComplete = true ; ia3x4slpbv5 . mk3xlugtq0
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . ju5z0q3z31 = true ;
ia3x4slpbv5 . mk3xlugtq0 . SampleTime = i5w14emkxk . AnalogInput3_SampleTime
; ia3x4slpbv5 . mk3xlugtq0 . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
ia3x4slpbv5 . mk3xlugtq0 . AnalogInDriverObj . MW_ANALOGIN_HANDLE =
MW_AnalogInSingle_Open ( _zlKlRt9I4NG2G2aasiN8o_ ) ; ia3x4slpbv5 . mk3xlugtq0
. isSetupComplete = true ; ia3x4slpbv5 . az2kueyxwb . matlabCodegenIsDeleted
= false ; ia3x4slpbv5 . bfpqxyjbkd = true ; ia3x4slpbv5 . az2kueyxwb .
isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ; digitalIOSetup (
_pvLCxI2EN_CBKSZyVB_P02 , _QHNSjd8JBrVVYZAcs7Zm32 ) ; ia3x4slpbv5 .
az2kueyxwb . isSetupComplete = true ; ia3x4slpbv5 . nazu0hjezq .
matlabCodegenIsDeleted = false ; ia3x4slpbv5 . pni0ttth1p = true ;
ia3x4slpbv5 . nazu0hjezq . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _hCXUd_x6pbKZfXtyKXEw82 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . nazu0hjezq . isSetupComplete = true ; ia3x4slpbv5 . fzgfmnjl1n
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . di3bxskkpt = true ;
ia3x4slpbv5 . fzgfmnjl1n . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _t0CSRdt0cj28FWcY3kSLw_ , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . fzgfmnjl1n . isSetupComplete = true ; ia3x4slpbv5 . mhxwtses05
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . jf4mux0513 = true ;
ia3x4slpbv5 . mhxwtses05 . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _9rHO1ek1Om1saeRq2pf3_0 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . mhxwtses05 . isSetupComplete = true ; ia3x4slpbv5 . gw2gv55s2g
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . dooehz1qjx = true ;
ia3x4slpbv5 . gw2gv55s2g . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
ia3x4slpbv5 . gw2gv55s2g . PWMDriverObj . MW_PWM_HANDLE = MW_PWM_Open (
_OnGbDvPAlR28i1EHJ77W50 , _Z77Ee2RGrs6HvPP38e_Kk_ , _Z77Ee2RGrs6HvPP38e_Kk_ )
; ia3x4slpbv5 . gw2gv55s2g . isSetupComplete = true ; ia3x4slpbv5 .
bhjjxa3tdj . matlabCodegenIsDeleted = false ; ia3x4slpbv5 . avgsukx0ao = true
; ia3x4slpbv5 . bhjjxa3tdj . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _QHNSjd8JBrVVYZAcs7Zm32 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . bhjjxa3tdj . isSetupComplete = true ; ia3x4slpbv5 . amrah5bctr
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . g2fpjetcv0 = true ;
ia3x4slpbv5 . amrah5bctr . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _PIqWtbzrbQqv_KS_31HnE2 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . amrah5bctr . isSetupComplete = true ; ia3x4slpbv5 . doetqvvt4d
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . l2lirpjimm = true ;
ia3x4slpbv5 . doetqvvt4d . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
ia3x4slpbv5 . doetqvvt4d . PWMDriverObj . MW_PWM_HANDLE = MW_PWM_Open (
_e9A_g7gxoUOnv_bONS2N82 , _Z77Ee2RGrs6HvPP38e_Kk_ , _Z77Ee2RGrs6HvPP38e_Kk_ )
; ia3x4slpbv5 . doetqvvt4d . isSetupComplete = true ; ia3x4slpbv5 .
ato2eu5xie . matlabCodegenIsDeleted = false ; ia3x4slpbv5 . kywfu4w254 = true
; ia3x4slpbv5 . ato2eu5xie . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _KYlcoOk9rSSGYswizhYqZ2 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . ato2eu5xie . isSetupComplete = true ; ia3x4slpbv5 . lvtkllhgrx
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . geor2axe1d = true ;
ia3x4slpbv5 . lvtkllhgrx . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _g7WFphbd05O6bEjctOzUc1 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
ia3x4slpbv5 . lvtkllhgrx . isSetupComplete = true ; ia3x4slpbv5 . pqp0hb4acc
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . oqfgdwuxx1 = true ;
ia3x4slpbv5 . pqp0hb4acc . SampleTime = i5w14emkxk . DigitalInput1_SampleTime
; ia3x4slpbv5 . pqp0hb4acc . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _aoel664zPcTjzpXADn7l40 , _PIqWtbzrbQqv_KS_31HnE2 ) ;
ia3x4slpbv5 . pqp0hb4acc . isSetupComplete = true ; ia3x4slpbv5 . nmf1q0pxpd
. matlabCodegenIsDeleted = false ; ia3x4slpbv5 . ajvc4zhl2n = true ;
ia3x4slpbv5 . nmf1q0pxpd . SampleTime = i5w14emkxk . DigitalInput2_SampleTime
; ia3x4slpbv5 . nmf1q0pxpd . isInitialized = _QHNSjd8JBrVVYZAcs7Zm32 ;
digitalIOSetup ( _IjHdoOm5hGk4VAbwwsvcL1 , _PIqWtbzrbQqv_KS_31HnE2 ) ;
ia3x4slpbv5 . nmf1q0pxpd . isSetupComplete = true ; ia3x4slpbv5 . eztp5mft1s
= i5w14emkxk . Accumulator_IC ; ia3x4slpbv5 . ivperkbebl = i5w14emkxk .
Accumulator1_IC ; ia3x4slpbv5 . gh2cwdfx4o = i5w14emkxk .
DetectIncrease_vinit ; ia3x4slpbv5 . mth4saxzur = i5w14emkxk .
DetectIncrease1_vinit ; ia3x4slpbv5 . aqxdlnsdy3 = _TPQ_vWWUSL7ze3htINC_W2 ;
ia3x4slpbv5 . pavnexpku2 = _TPQ_vWWUSL7ze3htINC_W2 ; ia3x4slpbv5 . plyhg0pn3d
= mihb4dqmjh ; ifo1kqiubpm . oz2u2klmwy = _Z77Ee2RGrs6HvPP38e_Kk_ ;
ia3x4slpbv5 . bulljvefi4 = _Z77Ee2RGrs6HvPP38e_Kk_ ; ia3x4slpbv5 . jj1c410k45
= _Z77Ee2RGrs6HvPP38e_Kk_ ; memset ( & ia3x4slpbv5 . g0uhu3fgko [
_PIqWtbzrbQqv_KS_31HnE2 ] , _PIqWtbzrbQqv_KS_31HnE2 , _kej34WkiJ_9nP3d6RVWP52
* sizeof ( real_T ) ) ; ia3x4slpbv5 . hxkezaxr5r = _Z77Ee2RGrs6HvPP38e_Kk_ ;
ia3x4slpbv5 . mouz345o2e = _Z77Ee2RGrs6HvPP38e_Kk_ ; ia3x4slpbv5 . i2kvelbbhw
= _Z77Ee2RGrs6HvPP38e_Kk_ ; ia3x4slpbv5 . oi20fvil4f =
_Z77Ee2RGrs6HvPP38e_Kk_ ; ia3x4slpbv5 . lel0yh1asg = _TPQ_vWWUSL7ze3htINC_W2
; ifo1kqiubpm . b3tr21kgcj = _Z77Ee2RGrs6HvPP38e_Kk_ ; } void
LeftTurn_terminate ( void ) { if ( ! ia3x4slpbv5 . ia5cgvcy1z .
matlabCodegenIsDeleted ) { ia3x4slpbv5 . ia5cgvcy1z . matlabCodegenIsDeleted
= true ; if ( ( ia3x4slpbv5 . ia5cgvcy1z . isInitialized ==
_QHNSjd8JBrVVYZAcs7Zm32 ) && ia3x4slpbv5 . ia5cgvcy1z . isSetupComplete ) {
ia3x4slpbv5 . ia5cgvcy1z . AnalogInDriverObj . MW_ANALOGIN_HANDLE =
MW_AnalogIn_GetHandle ( _emIIW_7YN0QOZ3WhxvJi41 ) ; MW_AnalogIn_Close (
ia3x4slpbv5 . ia5cgvcy1z . AnalogInDriverObj . MW_ANALOGIN_HANDLE ) ; } } if
( ! ia3x4slpbv5 . eu02mzzlfp . matlabCodegenIsDeleted ) { ia3x4slpbv5 .
eu02mzzlfp . matlabCodegenIsDeleted = true ; if ( ( ia3x4slpbv5 . eu02mzzlfp
. isInitialized == _QHNSjd8JBrVVYZAcs7Zm32 ) && ia3x4slpbv5 . eu02mzzlfp .
isSetupComplete ) { ia3x4slpbv5 . eu02mzzlfp . AnalogInDriverObj .
MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle ( _xPMRP5xoInnnSDqQdAB_p2 ) ;
MW_AnalogIn_Close ( ia3x4slpbv5 . eu02mzzlfp . AnalogInDriverObj .
MW_ANALOGIN_HANDLE ) ; } } if ( ! ia3x4slpbv5 . aoccxoxn5t .
matlabCodegenIsDeleted ) { ia3x4slpbv5 . aoccxoxn5t . matlabCodegenIsDeleted
= true ; if ( ( ia3x4slpbv5 . aoccxoxn5t . isInitialized ==
_QHNSjd8JBrVVYZAcs7Zm32 ) && ia3x4slpbv5 . aoccxoxn5t . isSetupComplete ) {
ia3x4slpbv5 . aoccxoxn5t . AnalogInDriverObj . MW_ANALOGIN_HANDLE =
MW_AnalogIn_GetHandle ( _8Ew6t8ZE5Di8prqlF9sWH1 ) ; MW_AnalogIn_Close (
ia3x4slpbv5 . aoccxoxn5t . AnalogInDriverObj . MW_ANALOGIN_HANDLE ) ; } } if
( ! ia3x4slpbv5 . mk3xlugtq0 . matlabCodegenIsDeleted ) { ia3x4slpbv5 .
mk3xlugtq0 . matlabCodegenIsDeleted = true ; if ( ( ia3x4slpbv5 . mk3xlugtq0
. isInitialized == _QHNSjd8JBrVVYZAcs7Zm32 ) && ia3x4slpbv5 . mk3xlugtq0 .
isSetupComplete ) { ia3x4slpbv5 . mk3xlugtq0 . AnalogInDriverObj .
MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle ( _zlKlRt9I4NG2G2aasiN8o_ ) ;
MW_AnalogIn_Close ( ia3x4slpbv5 . mk3xlugtq0 . AnalogInDriverObj .
MW_ANALOGIN_HANDLE ) ; } } if ( ! ia3x4slpbv5 . az2kueyxwb .
matlabCodegenIsDeleted ) { ia3x4slpbv5 . az2kueyxwb . matlabCodegenIsDeleted
= true ; } if ( ! ia3x4slpbv5 . nazu0hjezq . matlabCodegenIsDeleted ) {
ia3x4slpbv5 . nazu0hjezq . matlabCodegenIsDeleted = true ; } if ( !
ia3x4slpbv5 . fzgfmnjl1n . matlabCodegenIsDeleted ) { ia3x4slpbv5 .
fzgfmnjl1n . matlabCodegenIsDeleted = true ; } if ( ! ia3x4slpbv5 .
mhxwtses05 . matlabCodegenIsDeleted ) { ia3x4slpbv5 . mhxwtses05 .
matlabCodegenIsDeleted = true ; } if ( ! ia3x4slpbv5 . gw2gv55s2g .
matlabCodegenIsDeleted ) { ia3x4slpbv5 . gw2gv55s2g . matlabCodegenIsDeleted
= true ; if ( ( ia3x4slpbv5 . gw2gv55s2g . isInitialized ==
_QHNSjd8JBrVVYZAcs7Zm32 ) && ia3x4slpbv5 . gw2gv55s2g . isSetupComplete ) {
ia3x4slpbv5 . gw2gv55s2g . PWMDriverObj . MW_PWM_HANDLE = MW_PWM_GetHandle (
_OnGbDvPAlR28i1EHJ77W50 ) ; MW_PWM_SetDutyCycle ( ia3x4slpbv5 . gw2gv55s2g .
PWMDriverObj . MW_PWM_HANDLE , _Z77Ee2RGrs6HvPP38e_Kk_ ) ; ia3x4slpbv5 .
gw2gv55s2g . PWMDriverObj . MW_PWM_HANDLE = MW_PWM_GetHandle (
_OnGbDvPAlR28i1EHJ77W50 ) ; MW_PWM_Close ( ia3x4slpbv5 . gw2gv55s2g .
PWMDriverObj . MW_PWM_HANDLE ) ; } } if ( ! ia3x4slpbv5 . bhjjxa3tdj .
matlabCodegenIsDeleted ) { ia3x4slpbv5 . bhjjxa3tdj . matlabCodegenIsDeleted
= true ; } if ( ! ia3x4slpbv5 . amrah5bctr . matlabCodegenIsDeleted ) {
ia3x4slpbv5 . amrah5bctr . matlabCodegenIsDeleted = true ; } if ( !
ia3x4slpbv5 . doetqvvt4d . matlabCodegenIsDeleted ) { ia3x4slpbv5 .
doetqvvt4d . matlabCodegenIsDeleted = true ; if ( ( ia3x4slpbv5 . doetqvvt4d
. isInitialized == _QHNSjd8JBrVVYZAcs7Zm32 ) && ia3x4slpbv5 . doetqvvt4d .
isSetupComplete ) { ia3x4slpbv5 . doetqvvt4d . PWMDriverObj . MW_PWM_HANDLE =
MW_PWM_GetHandle ( _e9A_g7gxoUOnv_bONS2N82 ) ; MW_PWM_SetDutyCycle (
ia3x4slpbv5 . doetqvvt4d . PWMDriverObj . MW_PWM_HANDLE ,
_Z77Ee2RGrs6HvPP38e_Kk_ ) ; ia3x4slpbv5 . doetqvvt4d . PWMDriverObj .
MW_PWM_HANDLE = MW_PWM_GetHandle ( _e9A_g7gxoUOnv_bONS2N82 ) ; MW_PWM_Close (
ia3x4slpbv5 . doetqvvt4d . PWMDriverObj . MW_PWM_HANDLE ) ; } } if ( !
ia3x4slpbv5 . ato2eu5xie . matlabCodegenIsDeleted ) { ia3x4slpbv5 .
ato2eu5xie . matlabCodegenIsDeleted = true ; } if ( ! ia3x4slpbv5 .
lvtkllhgrx . matlabCodegenIsDeleted ) { ia3x4slpbv5 . lvtkllhgrx .
matlabCodegenIsDeleted = true ; } if ( ! ia3x4slpbv5 . pqp0hb4acc .
matlabCodegenIsDeleted ) { ia3x4slpbv5 . pqp0hb4acc . matlabCodegenIsDeleted
= true ; } if ( ! ia3x4slpbv5 . nmf1q0pxpd . matlabCodegenIsDeleted ) {
ia3x4slpbv5 . nmf1q0pxpd . matlabCodegenIsDeleted = true ; } }
