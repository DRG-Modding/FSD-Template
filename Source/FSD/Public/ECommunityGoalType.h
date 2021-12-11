#pragma once
#include "CoreMinimal.h"
#include "ECommunityGoalType.generated.h"

UENUM(BlueprintType)
enum class ECommunityGoalType : uint8 {
    Float,
    Integer,
    Time,
    Distance,
};

