class CfgSoundshaders {
    CLASS(sgun_closeShot_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_04",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_05",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_06",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_07",1}};
        volume = 1.0;
        range = 200;
        rangeCurve = "closeShotCurve";
    };
    
    CLASS(sgun_closeShotCenter_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Close_Center_04",1}};
        volume = 1.9;
        range = 25;
        rangeCurve = "closeShotCurve";
    };
    
    CLASS(sgun_distShot_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",2}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",3}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",4}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",5}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",6}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",7}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",8}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",9}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Shot_Distant_01",10}};
        volume = 0.6;
        range = 2000;
        rangeCurve[] = {{0,0}, {100,0.5}, {300,1}, {1500,1}, {2000,0}};
    };

    CLASS(sgun_tailForest_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_04",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_05",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_06",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_07",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_08",1}};
        volume = "(1-interior/1.4)*forest/2";
        range = 2000;
        rangeCurve[] = {{0,1},{2000,0}};
        limitation = 1;
    };

    CLASS(sgun_tailHouses_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_04",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_05",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_06",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_07",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Flutter_08",1}};
        volume = "(1-interior/1.4)*houses/2";
        range = 2000;
        rangeCurve[] = {{0,1}, {2000,0}};
        limitation = 1;
    };

    CLASS(sgun_tailInt_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_04",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Int_05",1}};
        volume = "1.3 * interior";
        range = 60;
        rangeCurve[] = {{0,1}, {50,0.4}, {100,0.2}, {350,0}};
        limitation = 1;
    };

    CLASS(sgun_tailMeadows_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_04",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_05",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Open_06",1}};
        volume = "1 * (1-interior/1.4) * (1-forest)";
        range = 2000;
        rangeCurve[] = {{0,1}, {2000,0}};
        limitation = 1;
    };

    CLASS(sgun_tailUrban_SoundShader) {
        samples[] = {{"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_01",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_02",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_03",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_04",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_05",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_06",1}, {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_01_Shotgun_Tail_Urban_07",1}};
        volume = "1 * (1-forest)* (1.4-interior/1.4)*houses/2";
        range = 100;
        rangeCurve = "CannonMidShotCurve";
        limitation = 1;
    };
};

class CfgSoundSets {
    CLASS(sgun_LB_Shot_SoundSet) {
        soundShaders[] = {"TACGT_sgun_closeShot_SoundShader", "TACGT_sgun_closeShotCenter_SoundShader", "TACGT_sgun_distShot_SoundShader"};
        volumeFactor = 0.9;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    CLASS(sgun_LB_tail_SoundSet) {
        soundShaders[] = {"TACGT_sgun_tailForest_SoundShader", "TACGT_sgun_tailHouses_SoundShader", "TACGT_sgun_tailInt_SoundShader", "TACGT_sgun_tailMeadows_SoundShader", "TACGT_sgun_tailUrban_SoundShader"};
        volumeFactor = "1.25* 0.9";
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    CLASS(sgun_SB_Shot_SoundSet) {
        soundShaders[] = {"TACGT_sgun_closeShot_SoundShader", "TACGT_sgun_closeShotCenter_SoundShader", "TACGT_sgun_distShot_SoundShader"};
        volumeFactor = 1.1;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    CLASS(sgun_SB_tail_SoundSet) {
        soundShaders[] = {"TACGT_sgun_tailForest_SoundShader", "TACGT_sgun_tailHouses_SoundShader", "TACGT_sgun_tailInt_SoundShader", "TACGT_sgun_tailMeadows_SoundShader", "TACGT_sgun_tailUrban_SoundShader"};
        volumeFactor = "1.5* 0.9";
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
};
