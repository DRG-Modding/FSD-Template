#pragma once
#include "CoreMinimal.h"
#include "ECommunityGoalIndex.generated.h"

UENUM(BlueprintType)
enum class ECommunityGoalIndex : uint8 {
    KillBroodNexus,
    KillBulkDetonators,
    KillCaveLeeches,
    KillJellyBreeders,
    KillPretorians,
    KillShellbacks,
    KillSpitballers,
    CollectBittergem,
    CollectCompressedGold,
    CollectGold,
    CollectCraftingMaterials,
    GainXP,
    TestGoal,
    Count,
};

