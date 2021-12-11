#pragma once
#include "CoreMinimal.h"
#include "AchievementSaveEntry.h"
#include "AchievementSave.generated.h"

USTRUCT(BlueprintType)
struct FAchievementSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FString> OfflineAchievedAchievements;
    
    UPROPERTY()
    TArray<FAchievementSaveEntry> AchievementEntries;
    
public:
    FSD_API FAchievementSave();
};

