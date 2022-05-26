#pragma once
#include "CoreMinimal.h"
#include "EArmorSetArms.generated.h"

UENUM(BlueprintType)
enum class EArmorSetArms : uint8 {
    Invalid,
    LeftShoulder,
    RightShoulder,
    LeftUpperArm,
    LeftLowerArm1,
    LeftLowerArm2,
    LeftHand,
    LeftHandAttach,
    RightUpperArm,
    RightLowerArm1,
    RightLowerArm2,
    RightHand,
    RightHandAttach,
};

