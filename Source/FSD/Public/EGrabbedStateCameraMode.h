#pragma once
#include "CoreMinimal.h"
#include "EGrabbedStateCameraMode.generated.h"

UENUM(BlueprintType)
enum class EGrabbedStateCameraMode : uint8 {
    FirstPerson,
    ThirdPerson,
};

