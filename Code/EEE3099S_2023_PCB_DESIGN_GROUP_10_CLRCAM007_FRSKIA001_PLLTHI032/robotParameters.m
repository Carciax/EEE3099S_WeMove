%Robot Parameters
wheelR = 0.033; %Wheel radius (m)
axleLength = 0.14; %Distance between wheels (m)
ticksPerRot = 10; % Ticks per rotation for encoders
load wheelLUT %Look up table for platform motors
Ts = 0.001; %Sample time
load wheelMotorModel %Motor model for platform motorswheelMotorModel