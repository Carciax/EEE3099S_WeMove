    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 58;
            section.data(58)  = dumData; %prealloc

                    ;% rtP.InputPWM
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.WheelSpeed
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 173;

                    ;% rtP.axleLength
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 346;

                    ;% rtP.lineLength
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 347;

                    ;% rtP.ticksPerRot
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 348;

                    ;% rtP.wheelR
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 349;

                    ;% rtP.Difference_ICPrevInput
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 350;

                    ;% rtP.LineSensor_envVal
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 351;

                    ;% rtP.LineSensor_lineVal
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 352;

                    ;% rtP.LeftMotor_sensorType
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 353;

                    ;% rtP.RightMotor_sensorType
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 354;

                    ;% rtP.RobotSimulator_startTheta
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 355;

                    ;% rtP.RobotSimulator_startX
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 356;

                    ;% rtP.RobotSimulator_startY
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 357;

                    ;% rtP.Towlwr_wheelR
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 358;

                    ;% rtP.Gain_Gain
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 359;

                    ;% rtP.Gain_Gain_o4hmcpr5ca
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 360;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 361;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 362;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 363;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 364;

                    ;% rtP.DiscreteTimeIntegrator_gainval_lzyl4k4zxv
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 365;

                    ;% rtP.DiscreteTimeIntegrator_IC_f5z3vyriqm
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 366;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_fz4ugw3les
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 367;

                    ;% rtP.DiscreteTimeIntegrator1_IC_ervpavkjfk
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 368;

                    ;% rtP.Multiply2_Gain
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 369;

                    ;% rtP.Multiply5_Gain
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 370;

                    ;% rtP.DiscreteTimeIntegrator_gainval_lipa2hzbkc
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 371;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_goiftktzjh
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 372;

                    ;% rtP.DiscreteTimeIntegrator2_gainval
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 373;

                    ;% rtP.Multiply1_Gain
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 374;

                    ;% rtP.DiscreteTimeIntegrator_gainval_afikqgzpe0
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 375;

                    ;% rtP.DiscreteTimeIntegrator_IC_i43ho510i4
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 376;

                    ;% rtP.Internal_A
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 377;

                    ;% rtP.Internal_B
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 386;

                    ;% rtP.Internal_C
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 389;

                    ;% rtP.Switch_Threshold
                    section.data(37).logicalSrcIdx = 38;
                    section.data(37).dtTransOffset = 392;

                    ;% rtP.DiscreteTimeIntegrator_gainval_ptlrlhszmg
                    section.data(38).logicalSrcIdx = 39;
                    section.data(38).dtTransOffset = 393;

                    ;% rtP.DiscreteTimeIntegrator_IC_e3x2ks5ohu
                    section.data(39).logicalSrcIdx = 40;
                    section.data(39).dtTransOffset = 394;

                    ;% rtP.Internal_A_avp5ztxxzl
                    section.data(40).logicalSrcIdx = 41;
                    section.data(40).dtTransOffset = 395;

                    ;% rtP.Internal_B_ebkdikdi50
                    section.data(41).logicalSrcIdx = 42;
                    section.data(41).dtTransOffset = 404;

                    ;% rtP.Internal_C_hiyczu5j42
                    section.data(42).logicalSrcIdx = 43;
                    section.data(42).dtTransOffset = 407;

                    ;% rtP.Switch_Threshold_bmwdvzwwf2
                    section.data(43).logicalSrcIdx = 46;
                    section.data(43).dtTransOffset = 410;

                    ;% rtP.SoftRealTime_P1_Size
                    section.data(44).logicalSrcIdx = 47;
                    section.data(44).dtTransOffset = 411;

                    ;% rtP.SoftRealTime_P1
                    section.data(45).logicalSrcIdx = 48;
                    section.data(45).dtTransOffset = 413;

                    ;% rtP.Multiply_Gain
                    section.data(46).logicalSrcIdx = 49;
                    section.data(46).dtTransOffset = 414;

                    ;% rtP.Gain2_Gain
                    section.data(47).logicalSrcIdx = 50;
                    section.data(47).dtTransOffset = 415;

                    ;% rtP.Gain3_Gain
                    section.data(48).logicalSrcIdx = 51;
                    section.data(48).dtTransOffset = 416;

                    ;% rtP.changeparameters_Gain
                    section.data(49).logicalSrcIdx = 52;
                    section.data(49).dtTransOffset = 417;

                    ;% rtP.Circle_Value
                    section.data(50).logicalSrcIdx = 53;
                    section.data(50).dtTransOffset = 421;

                    ;% rtP.Gain1_Gain
                    section.data(51).logicalSrcIdx = 54;
                    section.data(51).dtTransOffset = 422;

                    ;% rtP.Constant_Value
                    section.data(52).logicalSrcIdx = 55;
                    section.data(52).dtTransOffset = 423;

                    ;% rtP.Constant1_Value
                    section.data(53).logicalSrcIdx = 56;
                    section.data(53).dtTransOffset = 427;

                    ;% rtP.Constant1_Value_bemiwsq1ta
                    section.data(54).logicalSrcIdx = 57;
                    section.data(54).dtTransOffset = 431;

                    ;% rtP.Multiply_Gain_odfbensap2
                    section.data(55).logicalSrcIdx = 58;
                    section.data(55).dtTransOffset = 432;

                    ;% rtP.Constant_Value_bw3epovpb1
                    section.data(56).logicalSrcIdx = 59;
                    section.data(56).dtTransOffset = 433;

                    ;% rtP.Constant_Value_e2utgdqno3
                    section.data(57).logicalSrcIdx = 60;
                    section.data(57).dtTransOffset = 434;

                    ;% rtP.Constant1_Value_bv54zl0zqv
                    section.data(58).logicalSrcIdx = 61;
                    section.data(58).dtTransOffset = 435;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.Switch_Threshold_jhitgx5agm
                    section.data(1).logicalSrcIdx = 62;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.nnxbi4fgqg.Constant_Value
                    section.data(1).logicalSrcIdx = 63;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Gain1_Gain
                    section.data(1).logicalSrcIdx = 64;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Bias_Bias
                    section.data(2).logicalSrcIdx = 65;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Saturation_UpperSat
                    section.data(3).logicalSrcIdx = 66;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Saturation_LowerSat
                    section.data(4).logicalSrcIdx = 67;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Gain_Gain
                    section.data(5).logicalSrcIdx = 68;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Bias1_Bias
                    section.data(6).logicalSrcIdx = 69;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Saturation1_UpperSat
                    section.data(7).logicalSrcIdx = 70;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Saturation1_LowerSat
                    section.data(8).logicalSrcIdx = 71;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Constant_Value
                    section.data(9).logicalSrcIdx = 72;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.Constant1_Value
                    section.data(10).logicalSrcIdx = 73;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.DirectLookupTablenD_table
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.nnxbi4fgqg.nnxbi4fgqg.DirectLookupTablenD_DiagnosticForOutOfRangeInput
                    section.data(1).logicalSrcIdx = 75;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtP.fmtja5mwec.Gain1_Gain
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.fmtja5mwec.Bias_Bias
                    section.data(2).logicalSrcIdx = 77;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.fmtja5mwec.Gain_Gain
                    section.data(3).logicalSrcIdx = 78;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.fmtja5mwec.Bias1_Bias
                    section.data(4).logicalSrcIdx = 79;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.fmtja5mwec.Saturation2_UpperSat
                    section.data(5).logicalSrcIdx = 80;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.fmtja5mwec.Saturation2_LowerSat
                    section.data(6).logicalSrcIdx = 81;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.fmtja5mwec.Saturation3_UpperSat
                    section.data(7).logicalSrcIdx = 82;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.fmtja5mwec.Saturation3_LowerSat
                    section.data(8).logicalSrcIdx = 83;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.fmtja5mwec.Constant_Value
                    section.data(9).logicalSrcIdx = 84;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.fmtja5mwec.DirectLookupTablenD_table
                    section.data(1).logicalSrcIdx = 85;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.fmtja5mwec.DirectLookupTablenD_DiagnosticForOutOfRangeInput
                    section.data(1).logicalSrcIdx = 86;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 31;
            section.data(31)  = dumData; %prealloc

                    ;% rtB.ji00wv3014
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.decjdihxcw
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.gz1dfa42lu
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ditq055ebh
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.iylpq3hghr
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.bdnigyvsyn
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.kbohsqzdeb
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.gqsc4yxprh
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.jz52v00tr3
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtB.jwdxaqf2qz
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtB.jswowza1d4
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtB.peqplb45u4
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtB.aj2jxy1h1h
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtB.hylamboxo5
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% rtB.bomtjdim42
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% rtB.b5nsh0zsui
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% rtB.cuccgthc4o
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 19;

                    ;% rtB.pnvlipz4jm
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% rtB.lw52j1u5b3
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% rtB.ne2ywir1gp
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% rtB.a34al3yjl2
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% rtB.ph2pcx1thu
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% rtB.bmf1pvrpw0
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% rtB.hrtlirekve
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 26;

                    ;% rtB.nwywsnx52p
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 27;

                    ;% rtB.g4h00jrxug
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 28;

                    ;% rtB.b3j2perezy
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 37;

                    ;% rtB.mgh0bzr53e
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 38;

                    ;% rtB.bvsyqq0avh
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 39;

                    ;% rtB.ect0113fcp
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 40;

                    ;% rtB.l05rkglauf
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 41;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.px2fcnrkgv
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.nnxbi4fgqg[0].a5xinuasmi
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.nnxbi4fgqg[0].i1paemfyy5
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 14;
        sectIdxOffset = 4;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 26;
            section.data(26)  = dumData; %prealloc

                    ;% rtDW.onlvei224w
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jkf3nm3nbv
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cquyyzdzbt
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.lrnmt0mvw5
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bie05bd4ab
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ni53pjisvf
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.b4bqgf4dhw
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.ihgcj0rg1c
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.nqo0sx2y20
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.n0rkvty3rm
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 11;

                    ;% rtDW.mtncgxqpgg
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 12;

                    ;% rtDW.eenjimbo4a
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

                    ;% rtDW.bduxriqlxu
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 16;

                    ;% rtDW.iuwdeh0o2d
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

                    ;% rtDW.hqps1swkf5
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 77;

                    ;% rtDW.l4jjy24ze2
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 78;

                    ;% rtDW.pd4jg1jyod
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 79;

                    ;% rtDW.mhy0fuih2h
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 80;

                    ;% rtDW.gpyrvqffs3
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 81;

                    ;% rtDW.bjswwe2xbu
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 82;

                    ;% rtDW.gtn1wjmrwt
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 83;

                    ;% rtDW.iesem4g5ze
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 84;

                    ;% rtDW.glgpemjeyx
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 85;

                    ;% rtDW.kftjrjvgit
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 86;

                    ;% rtDW.fqvgstrkfl
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 87;

                    ;% rtDW.cl001iwg3i
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 88;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.mzbp2gbupe.AQHandles
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.jhqzz2bves
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lyqqvkmpdn
                    section.data(2).logicalSrcIdx = 28;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.nfrpqyqicb
                    section.data(3).logicalSrcIdx = 29;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.kxqwml5tfx
                    section.data(4).logicalSrcIdx = 30;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.jxpofb2f25
                    section.data(5).logicalSrcIdx = 31;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mdgfrwm0ue
                    section.data(6).logicalSrcIdx = 32;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.drdk50ofrw
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ho0sx3ydv5
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.nerakhrzb5
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.j0b02r3oov
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.a4woko0313
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.fhtms5vxtb
                    section.data(3).logicalSrcIdx = 38;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gcbmowb40i
                    section.data(4).logicalSrcIdx = 39;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.lb2eprmj4o
                    section.data(5).logicalSrcIdx = 40;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.gfj34s4ecr
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lslyhe01co
                    section.data(2).logicalSrcIdx = 42;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nnxbi4fgqg[0].h2z0k43iei
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nnxbi4fgqg[0].hvszrpwqhg
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nnxbi4fgqg[0].hwqj4kmtdf
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nnxbi4fgqg[0].nnxbi4fgqg[198].mrjx3dkhpv
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fmtja5mwec[3].dpx4b1tifg
                    section.data(1).logicalSrcIdx = 47;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fmtja5mwec[3].jblghem2vo
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fmtja5mwec[3].pya3jbutrr
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fmtja5mwec[3].nnsvnkqyjy
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3435749632;
    targMap.checksum1 = 4099094283;
    targMap.checksum2 = 2573463099;
    targMap.checksum3 = 3550494824;

