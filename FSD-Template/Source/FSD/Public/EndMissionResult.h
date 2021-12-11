#pragma once
#include "CoreMinimal.h"
#include "PlayerProgress.h"
#include "CharacterProgress.h"
#include "EndMissionResult.generated.h"

class USchematic;

USTRUCT(BlueprintType)
struct FEndMissionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPlayerProgress PreviousPlayerProgress;
    
    UPROPERTY(BlueprintReadOnly)
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadOnly)
    FCharacterProgress PreviousCharacterProgress;
    
    UPROPERTY(BlueprintReadOnly)
    FCharacterProgress CharacterProgress;
    
    UPROPERTY(BlueprintReadOnly)
    USchematic* RewardedSchematic;
    
    UPROPERTY(BlueprintReadOnly)
    bool bReadyForUse;
    
    FSD_API FEndMissionResult();
};

