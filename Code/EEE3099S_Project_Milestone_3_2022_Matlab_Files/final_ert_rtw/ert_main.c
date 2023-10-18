#include "__cf_final.h"
#include "final.h"
#include "rtwtypes.h"
#include "MW_target_hardware_resources.h"
volatile int IsrOverrun = _PIqWtbzrbQqv_KS_31HnE2 ; static boolean_T
OverrunFlag = _PIqWtbzrbQqv_KS_31HnE2 ; void rt_OneStep ( void ) { if (
OverrunFlag ++ ) { IsrOverrun = _QHNSjd8JBrVVYZAcs7Zm32 ; OverrunFlag -- ;
return ; }
#ifndef _MW_ARDUINO_LOOP_ 
interrupts ( ) ;
#endif
; final_step ( ) ;
#ifndef _MW_ARDUINO_LOOP_ 
noInterrupts ( ) ;
#endif
; OverrunFlag -- ; } volatile boolean_T stopRequested ; volatile boolean_T
runModel ; int main ( void ) { float modelBaseRate = _mFnttH_CHRfmeN2fhYikZ2
; float systemClock = _PIqWtbzrbQqv_KS_31HnE2 ; stopRequested = false ;
runModel = false ; init ( ) ; MW_usbattach ( ) ; MW_Arduino_Init ( ) ;
rtmSetErrorStatus ( psduok44te , _PIqWtbzrbQqv_KS_31HnE2 ) ; final_initialize
( ) ; noInterrupts ( ) ; configureArduinoARM_M0plusTimer ( ) ; runModel =
rtmGetErrorStatus ( psduok44te ) == ( NULL ) ;
#ifndef _MW_ARDUINO_LOOP_ 
interrupts ( ) ;
#endif
; interrupts ( ) ; while ( runModel ) { stopRequested = ! ( rtmGetErrorStatus
( psduok44te ) == ( NULL ) ) ; MW_Arduino_Loop ( ) ; } final_terminate ( ) ;
MW_Arduino_Terminate ( ) ; noInterrupts ( ) ; return _PIqWtbzrbQqv_KS_31HnE2
; }
