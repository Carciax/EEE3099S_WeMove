#include "__cf_LeftTurn.h"
#include "LeftTurn.h"
#include "rtwtypes.h"
#include "MW_target_hardware_resources.h"
volatile int IsrOverrun = _PIqWtbzrbQqv_KS_31HnE2 ; static boolean_T
OverrunFlag = _PIqWtbzrbQqv_KS_31HnE2 ; void rt_OneStep ( void ) { if (
OverrunFlag ++ ) { IsrOverrun = _QHNSjd8JBrVVYZAcs7Zm32 ; OverrunFlag -- ;
return ; }
#ifndef _MW_ARDUINO_LOOP_ 
interrupts ( ) ;
#endif
; LeftTurn_step ( ) ;
#ifndef _MW_ARDUINO_LOOP_ 
noInterrupts ( ) ;
#endif
; OverrunFlag -- ; } volatile boolean_T stopRequested ; volatile boolean_T
runModel ; int main ( void ) { float modelBaseRate = _mFnttH_CHRfmeN2fhYikZ2
; float systemClock = _PIqWtbzrbQqv_KS_31HnE2 ; stopRequested = false ;
runModel = false ; init ( ) ; MW_usbattach ( ) ; MW_Arduino_Init ( ) ;
rtmSetErrorStatus ( iv5ib1xm45 , _PIqWtbzrbQqv_KS_31HnE2 ) ;
LeftTurn_initialize ( ) ; noInterrupts ( ) ; configureArduinoARM_M0plusTimer
( ) ; runModel = rtmGetErrorStatus ( iv5ib1xm45 ) == ( NULL ) ;
#ifndef _MW_ARDUINO_LOOP_ 
interrupts ( ) ;
#endif
; interrupts ( ) ; while ( runModel ) { stopRequested = ! ( rtmGetErrorStatus
( iv5ib1xm45 ) == ( NULL ) ) ; MW_Arduino_Loop ( ) ; } LeftTurn_terminate ( )
; MW_Arduino_Terminate ( ) ; noInterrupts ( ) ; return
_PIqWtbzrbQqv_KS_31HnE2 ; }
