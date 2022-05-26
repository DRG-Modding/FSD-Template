#pragma once
#include "CoreMinimal.h"
#include "EArmorSetLegs.generated.h"

UENUM(BlueprintType)
enum class EArmorSetLegs : uint8 {
    Invalid,
    LeftUpperLeg,
    LeftLowerLeg,
    LeftFoot,
    LeftToe,
    RightUpperLeg,
    RightLowerLeg,
    RightFoot,
    RightToe,
};

