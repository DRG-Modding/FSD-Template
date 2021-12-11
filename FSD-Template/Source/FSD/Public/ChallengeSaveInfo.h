#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FChallengeSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> StatIndices;
    
    UPROPERTY()
    FGuid ChallengeGuid;
    
    UPROPERTY()
    int32 CurrentWins;
    
    UPROPERTY()
    int32 NumberOfWins;
    
    UPROPERTY()
    int32 XPCompleteGain;
    
    UPROPERTY()
    int32 TokenGain;
    
    FSD_API FChallengeSaveInfo();
};

