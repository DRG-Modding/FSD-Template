#pragma once
#include "CoreMinimal.h"
#include "EHackingPodState.generated.h"

UENUM(BlueprintType)
enum class EHackingPodState : uint8 {
    EClosed,
    EShowDispenser,
    EShowButton,
    EHacking,
    EDestroyed,
    EDone,
};

