#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FChallengeSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> StatIndices;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ChallengeGuid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CurrentWins;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumberOfWins;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 XPCompleteGain;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TokenGain;
    
    FSD_API FChallengeSaveInfo();
};

