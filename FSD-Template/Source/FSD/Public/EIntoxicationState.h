#pragma once
#include "CoreMinimal.h"
#include "EIntoxicationState.generated.h"

UENUM(BlueprintType)
enum class EIntoxicationState : uint8 {
    NotIntoxicated,
    Intoxicated,
    PassOut,
};

