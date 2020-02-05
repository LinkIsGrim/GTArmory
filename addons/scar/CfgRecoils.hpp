class CfgRecoils {
    scar_LRecoil[] = {0,0,0,0.03,0.00554145,0.028696,0.03,0.00795425,0.0120096,0.03,0.00691425,0.0085568,0.06,0.0033246,0.003648,0.06,-0.0003603,-0.002304,0.06,-0.0008825,-0.002256,0.06,-0.00091925,-0.00147,0.06,-0.0004707,-0.000375,0.06,0,0};
    scar_LRecoilProne[] = { 0,0,0,0.03,0.00554145,0.007174,0.03,0.00795425,0.0045036,0.03,0.00691425,0.0039728,0.06,0.0033246,0.001938,0.06,-0.0003603,-0.001536,0.06,-0.0008825,-0.00141,0.06,-0.00091925,-0.000588,0.06,-0.0004707,-0.000125,0.06,0,0};
    scar_HRecoil[] = {0,0,0,0.03,0.0443316,0.0459136,0.03,0.0477255,0.0180144,0.03,0.0335835,0.012224,0.03,0.0140372,0.005016,0.03,-0.0007206,-0.003456,0.03,-0.001765,-0.003948,0.03,-0.0011031,-0.00294,0.03,-0.0009414,-0.0015,0.06,-0.0006618,-0.000352,0.06,0,0};
    scar_HRecoilProne[] = {0,0,0,0.06,0.0110829,0.0086088,0.06,0.0159085,0.0035028,0.06,0.007902,0.0027504,0.06,0.0022164,0.001254,0.06,0,0};
    class recoil_default;
    class Recoil_CUP_SCAR_Mk16: recoil_default {
        muzzleOuter[] = {0.2,0.6,0.2,0.2};
        kickBack[] = {0.01,0.03};
        temporary = 0.01;
    };
};
