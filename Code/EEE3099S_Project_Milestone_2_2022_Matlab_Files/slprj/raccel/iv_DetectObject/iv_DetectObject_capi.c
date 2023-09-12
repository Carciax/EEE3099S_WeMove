#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "iv_DetectObject_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "iv_DetectObject.h"
#include "iv_DetectObject_capi.h"
#include "iv_DetectObject_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"iv_DetectObject/Controller" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 1 , TARGET_STRING ( "iv_DetectObject/Controller" ) , TARGET_STRING ( ""
) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"iv_DetectObject/Controller/is_active_c2_iv_DetectObject" ) , TARGET_STRING (
"is_active_c2_iv_DetectObject" ) , 0 , 1 , 0 , 0 , 0 } , { 3 , 0 ,
TARGET_STRING ( "iv_DetectObject/Controller/is_c2_iv_DetectObject" ) ,
TARGET_STRING ( "is_c2_iv_DetectObject" ) , 0 , 2 , 0 , 0 , 0 } , { 4 , 8 ,
TARGET_STRING ( "iv_DetectObject/ModeDefiner" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 5 , 8 , TARGET_STRING ( "iv_DetectObject/ModeDefiner" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"iv_DetectObject/ModeDefiner/is_active_c1_iv_DetectObject" ) , TARGET_STRING
( "is_active_c1_iv_DetectObject" ) , 0 , 1 , 0 , 0 , 0 } , { 7 , 0 ,
TARGET_STRING ( "iv_DetectObject/ModeDefiner/is_c1_iv_DetectObject" ) ,
TARGET_STRING ( "is_c1_iv_DetectObject" ) , 0 , 2 , 0 , 0 , 0 } , { 8 , 0 ,
TARGET_STRING ( "iv_DetectObject/Left Motor LUT" ) , TARGET_STRING (
"Left PWM" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"iv_DetectObject/Right Motor LUT" ) , TARGET_STRING ( "Right PWM" ) , 0 , 0 ,
0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"iv_DetectObject/Coordinates/Discrete-Time Integrator" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"iv_DetectObject/Coordinates/Discrete-Time Integrator1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"iv_DetectObject/Coordinates/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 13 , 0 , TARGET_STRING ( "iv_DetectObject/Coordinates/Product1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"iv_DetectObject/Encoder/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 15 , 0 , TARGET_STRING ( "iv_DetectObject/Encoder/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"iv_DetectObject/Line Sensor/Switch" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0
, 0 } , { 17 , 7 , TARGET_STRING ( "iv_DetectObject/LineFollower/Chart" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"iv_DetectObject/LineFollower/Chart/is_active_c3_iv_DetectObject" ) ,
TARGET_STRING ( "is_active_c3_iv_DetectObject" ) , 0 , 1 , 0 , 0 , 0 } , { 19
, 0 , TARGET_STRING (
"iv_DetectObject/LineFollower/Chart/is_c3_iv_DetectObject" ) , TARGET_STRING
( "is_c3_iv_DetectObject" ) , 0 , 2 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING
( "iv_DetectObject/LineFollower/Multiply" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 21 , 0 , TARGET_STRING ( "iv_DetectObject/LineFollower/Max" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "iv_DetectObject/Robot Simulator/MATLAB Function/is_active_c1_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c1_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 23 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Discrete-Time Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Discrete-Time Integrator1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 26 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Math Function" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 28 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Product3" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"iv_DetectObject/Subsystem/Multiply2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 32 , 0 , TARGET_STRING ( "iv_DetectObject/Subsystem/Multiply5" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Motor/Internal" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 34 , 6 , TARGET_STRING (
"iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"iv_DetectObject/RightMotor/Motor/Internal" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 36 , 16 , TARGET_STRING (
"iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 37 , 11 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Calculate Rotation Matrix"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Calculate Rotation Matrix/is_active_c4_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c4_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 39 , 0 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Transform Sensor Offset/is_active_c2_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c2_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 40 , 14 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value"
) , TARGET_STRING ( "" ) , 0 , 3 , 3 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Nearest Object/is_active_c5_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c5_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 42 , 15 , TARGET_STRING (
"iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 43 , TARGET_STRING ( "iv_DetectObject/LeftMotor"
) , TARGET_STRING ( "sensorType" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
"iv_DetectObject/Line Sensor" ) , TARGET_STRING ( "envVal" ) , 0 , 0 , 0 } ,
{ 45 , TARGET_STRING ( "iv_DetectObject/Line Sensor" ) , TARGET_STRING (
"lineVal" ) , 0 , 0 , 0 } , { 46 , TARGET_STRING (
"iv_DetectObject/RightMotor" ) , TARGET_STRING ( "sensorType" ) , 0 , 0 , 0 }
, { 47 , TARGET_STRING ( "iv_DetectObject/Robot Simulator" ) , TARGET_STRING
( "startX" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"iv_DetectObject/Robot Simulator" ) , TARGET_STRING ( "startY" ) , 0 , 0 , 0
} , { 49 , TARGET_STRING ( "iv_DetectObject/Robot Simulator" ) ,
TARGET_STRING ( "startTheta" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING (
"iv_DetectObject/To wlwr" ) , TARGET_STRING ( "wheelR" ) , 0 , 0 , 0 } , { 51
, TARGET_STRING ( "iv_DetectObject/Coordinates/Difference" ) , TARGET_STRING
( "ICPrevInput" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING (
"iv_DetectObject/Coordinates/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING (
"iv_DetectObject/Coordinates/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"iv_DetectObject/Coordinates/Discrete-Time Integrator1" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 55 , TARGET_STRING (
"iv_DetectObject/Coordinates/Discrete-Time Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"iv_DetectObject/Coordinates/Multiply" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 57 , TARGET_STRING (
"iv_DetectObject/Encoder/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"iv_DetectObject/Encoder/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"iv_DetectObject/Encoder/Discrete-Time Integrator1" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"iv_DetectObject/Encoder/Discrete-Time Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"iv_DetectObject/Encoder/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 62 , TARGET_STRING ( "iv_DetectObject/Encoder/Gain3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Switch" ) , TARGET_STRING ( "Threshold" ) , 0 , 0
, 0 } , { 66 , TARGET_STRING ( "iv_DetectObject/Line Sensor/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 67 , TARGET_STRING (
"iv_DetectObject/Line Sensor/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 1
, 0 } , { 68 , TARGET_STRING ( "iv_DetectObject/Line Sensor/Switch" ) ,
TARGET_STRING ( "Threshold" ) , 3 , 0 , 0 } , { 69 , TARGET_STRING (
"iv_DetectObject/LineFollower/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 70 , TARGET_STRING ( "iv_DetectObject/LineFollower/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"iv_DetectObject/LineFollower/Multiply" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 72 , TARGET_STRING ( "iv_DetectObject/LineFollower/Multiply1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"iv_DetectObject/RightMotor/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"iv_DetectObject/RightMotor/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"iv_DetectObject/RightMotor/Switch" ) , TARGET_STRING ( "Threshold" ) , 0 , 0
, 0 } , { 76 , TARGET_STRING ( "iv_DetectObject/Robot Simulator/Circle" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Discrete-Time Integrator" ) , TARGET_STRING
( "gainval" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Discrete-Time Integrator1" ) , TARGET_STRING
( "gainval" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Discrete-Time Integrator2" ) , TARGET_STRING
( "gainval" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 81 , TARGET_STRING (
"iv_DetectObject/Robot Simulator/Soft Real Time" ) , TARGET_STRING ( "P1" ) ,
0 , 0 , 0 } , { 82 , TARGET_STRING ( "iv_DetectObject/Subsystem/Multiply2" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"iv_DetectObject/Subsystem/Multiply5" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 84 , TARGET_STRING ( "iv_DetectObject/To wlwr/change parameters" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 85 , TARGET_STRING (
"iv_DetectObject/Ultrasonic Sensor/Constant" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 86 , TARGET_STRING (
"iv_DetectObject/Ultrasonic Sensor/Constant1" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 87 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Motor/Internal" ) , TARGET_STRING ( "A" ) , 0 , 5
, 0 } , { 88 , TARGET_STRING ( "iv_DetectObject/LeftMotor/Motor/Internal" ) ,
TARGET_STRING ( "B" ) , 0 , 6 , 0 } , { 89 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Motor/Internal" ) , TARGET_STRING ( "C" ) , 0 , 6
, 0 } , { 90 , TARGET_STRING (
"iv_DetectObject/LeftMotor/Radians to Degrees/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"iv_DetectObject/RightMotor/Motor/Internal" ) , TARGET_STRING ( "A" ) , 0 , 5
, 0 } , { 92 , TARGET_STRING ( "iv_DetectObject/RightMotor/Motor/Internal" )
, TARGET_STRING ( "B" ) , 0 , 6 , 0 } , { 93 , TARGET_STRING (
"iv_DetectObject/RightMotor/Motor/Internal" ) , TARGET_STRING ( "C" ) , 0 , 6
, 0 } , { 94 , TARGET_STRING (
"iv_DetectObject/RightMotor/Radians to Degrees/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 7 , 0 } , { 96 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation2"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation2"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation3"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation3"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "Table" ) , 3 , 8 , 0 } , { 106 , TARGET_STRING (
 "iv_DetectObject/Line Sensor/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "DiagnosticForOutOfRangeInput" ) , 1 , 0 , 0 } , { 107 ,
TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "Table" ) , 3 , 8 , 0 } , { 118 , TARGET_STRING (
 "iv_DetectObject/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "DiagnosticForOutOfRangeInput" ) , 1 , 0 , 0 } , { 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] =
{ - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL
) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 119 ,
TARGET_STRING ( "InputPWM" ) , 0 , 9 , 0 } , { 120 , TARGET_STRING (
"WheelSpeed" ) , 0 , 9 , 0 } , { 121 , TARGET_STRING ( "axleLength" ) , 0 , 0
, 0 } , { 122 , TARGET_STRING ( "lineLength" ) , 0 , 0 , 0 } , { 123 ,
TARGET_STRING ( "ticksPerRot" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
"wheelR" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ect0113fcp , & rtB . l05rkglauf ,
& rtDW . lb2eprmj4o , & rtDW . nerakhrzb5 , & rtB . b3j2perezy , & rtB .
mgh0bzr53e , & rtDW . fhtms5vxtb , & rtDW . drdk50ofrw , & rtB . lw52j1u5b3 ,
& rtB . ne2ywir1gp , & rtB . ji00wv3014 , & rtB . decjdihxcw , & rtB .
bomtjdim42 , & rtB . b5nsh0zsui , & rtB . cuccgthc4o , & rtB . pnvlipz4jm , &
rtB . gqsc4yxprh [ 0 ] , & rtB . bvsyqq0avh , & rtDW . gcbmowb40i , & rtDW .
ho0sx3ydv5 , & rtB . bmf1pvrpw0 , & rtB . jz52v00tr3 , & rtDW . a4woko0313 ,
& rtB . iylpq3hghr , & rtB . bdnigyvsyn , & rtB . ph2pcx1thu , & rtB .
kbohsqzdeb , & rtB . a34al3yjl2 , & rtB . peqplb45u4 , & rtB . aj2jxy1h1h , &
rtB . hylamboxo5 , & rtB . gz1dfa42lu , & rtB . ditq055ebh , & rtB .
jwdxaqf2qz , & rtB . px2fcnrkgv [ 0 ] , & rtB . jswowza1d4 , & rtB .
nwywsnx52p , & rtB . g4h00jrxug [ 0 ] , & rtDW . j0b02r3oov , & rtDW .
fmtja5mwec [ 3 ] . pya3jbutrr , & rtB . nnxbi4fgqg [ 0 ] . i1paemfyy5 [ 0 ] ,
& rtDW . nnxbi4fgqg [ 0 ] . hvszrpwqhg , & rtB . nnxbi4fgqg [ 0 ] .
a5xinuasmi [ 0 ] , & rtP . LeftMotor_sensorType , & rtP . LineSensor_envVal ,
& rtP . LineSensor_lineVal , & rtP . RightMotor_sensorType , & rtP .
RobotSimulator_startX , & rtP . RobotSimulator_startY , & rtP .
RobotSimulator_startTheta , & rtP . Towlwr_wheelR , & rtP .
Difference_ICPrevInput , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator_IC , & rtP . DiscreteTimeIntegrator1_gainval , & rtP .
DiscreteTimeIntegrator1_IC , & rtP . Multiply_Gain , & rtP .
DiscreteTimeIntegrator_gainval_lzyl4k4zxv , & rtP .
DiscreteTimeIntegrator_IC_f5z3vyriqm , & rtP .
DiscreteTimeIntegrator1_gainval_fz4ugw3les , & rtP .
DiscreteTimeIntegrator1_IC_ervpavkjfk , & rtP . Gain2_Gain , & rtP .
Gain3_Gain , & rtP . DiscreteTimeIntegrator_gainval_afikqgzpe0 , & rtP .
DiscreteTimeIntegrator_IC_i43ho510i4 , & rtP . Switch_Threshold , & rtP .
Constant_Value [ 0 ] , & rtP . Constant1_Value [ 0 ] , & rtP .
Switch_Threshold_jhitgx5agm , & rtP . Constant_Value_bw3epovpb1 , & rtP .
Constant1_Value_bemiwsq1ta , & rtP . Multiply_Gain_odfbensap2 , & rtP .
Multiply1_Gain , & rtP . DiscreteTimeIntegrator_gainval_ptlrlhszmg , & rtP .
DiscreteTimeIntegrator_IC_e3x2ks5ohu , & rtP . Switch_Threshold_bmwdvzwwf2 ,
& rtP . Circle_Value , & rtP . DiscreteTimeIntegrator_gainval_lipa2hzbkc , &
rtP . DiscreteTimeIntegrator1_gainval_goiftktzjh , & rtP .
DiscreteTimeIntegrator2_gainval , & rtP . Gain1_Gain , & rtP .
SoftRealTime_P1 , & rtP . Multiply2_Gain , & rtP . Multiply5_Gain , & rtP .
changeparameters_Gain [ 0 ] , & rtP . Constant_Value_e2utgdqno3 , & rtP .
Constant1_Value_bv54zl0zqv , & rtP . Internal_A [ 0 ] , & rtP . Internal_B [
0 ] , & rtP . Internal_C [ 0 ] , & rtP . Gain_Gain , & rtP .
Internal_A_avp5ztxxzl [ 0 ] , & rtP . Internal_B_ebkdikdi50 [ 0 ] , & rtP .
Internal_C_hiyczu5j42 [ 0 ] , & rtP . Gain_Gain_o4hmcpr5ca , & rtP .
nnxbi4fgqg . Constant_Value [ 0 ] , & rtP . fmtja5mwec . Bias_Bias , & rtP .
fmtja5mwec . Bias1_Bias , & rtP . fmtja5mwec . Constant_Value , & rtP .
fmtja5mwec . Gain_Gain , & rtP . fmtja5mwec . Gain1_Gain , & rtP . fmtja5mwec
. Saturation2_UpperSat , & rtP . fmtja5mwec . Saturation2_LowerSat , & rtP .
fmtja5mwec . Saturation3_UpperSat , & rtP . fmtja5mwec . Saturation3_LowerSat
, & rtP . fmtja5mwec . DirectLookupTablenD_table [ 0 ] , & rtP . fmtja5mwec .
DirectLookupTablenD_DiagnosticForOutOfRangeInput , & rtP . nnxbi4fgqg .
nnxbi4fgqg . Constant_Value , & rtP . nnxbi4fgqg . nnxbi4fgqg . Bias_Bias , &
rtP . nnxbi4fgqg . nnxbi4fgqg . Bias1_Bias , & rtP . nnxbi4fgqg . nnxbi4fgqg
. Constant1_Value , & rtP . nnxbi4fgqg . nnxbi4fgqg . Gain_Gain , & rtP .
nnxbi4fgqg . nnxbi4fgqg . Gain1_Gain , & rtP . nnxbi4fgqg . nnxbi4fgqg .
Saturation_UpperSat , & rtP . nnxbi4fgqg . nnxbi4fgqg . Saturation_LowerSat ,
& rtP . nnxbi4fgqg . nnxbi4fgqg . Saturation1_UpperSat , & rtP . nnxbi4fgqg .
nnxbi4fgqg . Saturation1_LowerSat , & rtP . nnxbi4fgqg . nnxbi4fgqg .
DirectLookupTablenD_table [ 0 ] , & rtP . nnxbi4fgqg . nnxbi4fgqg .
DirectLookupTablenD_DiagnosticForOutOfRangeInput , & rtP . InputPWM [ 0 ] , &
rtP . WheelSpeed [ 0 ] , & rtP . axleLength , & rtP . lineLength , & rtP .
ticksPerRot , & rtP . wheelR , } ; static int32_T * rtVarDimsAddrMap [ ] = {
( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "float" , "real32_T" , 0
, 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 3 , 3 , 199 , 1
, 2 , 2 , 9 , 1 , 3 , 1 , 1 , 199 , 1259 , 629 , 1 , 173 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 43 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 76 ,
rtModelParameters , 6 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3435749632U , 4099094283U , 2573463099U , 3550494824U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * iv_DetectObject_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void iv_DetectObject_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void iv_DetectObject_host_InitializeDataMapInfo (
iv_DetectObject_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
