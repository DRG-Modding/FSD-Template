#pragma once
#include "CoreMinimal.h"
#include "ECommunityUIState.generated.h"

UENUM(BlueprintType)
enum class ECommunityUIState : uint8 {
    Loading,
    SelectFaction,
    Progress,
    Recruitment,
    Reward,
    Invalid,
};

