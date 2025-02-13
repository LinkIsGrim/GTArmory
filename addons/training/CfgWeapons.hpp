class CfgWeapons {
    class Default;
    class Put: Default {
        muzzles[] += {QCLASS(training_muzzle)};
        class PutMuzzle: Default {};
        class CLASS(training_muzzle): PutMuzzle {
            magazines[] = {
                QCLASS(APERSBoundingMine_Range_Training_Mag),
                QCLASS(APERSMine_Range_Training_Mag),
                QCLASS(APERSTripMine_Wire_Training_Mag),
                QCLASS(ATMine_Range_Training_Mag),
                QCLASS(Claymore_Remote_Training_Mag),
                QCLASS(DemoCharge_Remote_Training_Mag),
                QCLASS(SatchelCharge_Remote_Training_Mag)
            };
        };
    };
};
