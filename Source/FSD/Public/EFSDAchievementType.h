#pragma once
#include "CoreMinimal.h"
#include "EFSDAchievementType.generated.h"

UENUM(BlueprintType)
enum class EFSDAchievementType : uint8 {
    NoStatUsed,
    IncrementStatPerCall,
    SetStatIfHighscore,
    ForceNewStatEachCall,
};

