#pragma once
#include "CoreMinimal.h"
#include "ECommunityUIState.generated.h"

UENUM()
enum class ECommunityUIState {
    Loading,
    SelectFaction,
    Progress,
    Recruitment,
    Reward,
    Invalid,
};

