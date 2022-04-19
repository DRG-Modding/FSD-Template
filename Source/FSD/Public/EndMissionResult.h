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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlayerProgress PreviousPlayerProgress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterProgress PreviousCharacterProgress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCharacterProgress CharacterProgress;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USchematic* RewardedSchematic;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bReadyForUse;
    
    FSD_API FEndMissionResult();
};

