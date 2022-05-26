#pragma once
#include "CoreMinimal.h"
#include "EArmorSetTorso.generated.h"

UENUM(BlueprintType)
enum class EArmorSetTorso : uint8 {
    Invalid,
    UpperTorso,
    MiddleTorso,
    LowerTorso,
    UpperBack,
    MiddleBack,
    LowerBack,
    LeftHip,
    RightHip,
    FrontHip,
    LeftUpperLeg,
    LeftLowerLeg,
    LeftFoot,
    LeftToe,
    RightUpperLeg,
    RightLowerLeg,
    RightFoot,
    RightToe,
};

