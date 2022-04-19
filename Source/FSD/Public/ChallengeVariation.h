#pragma once
#include "CoreMinimal.h"
#include "ChallengeVariation.generated.h"

USTRUCT(BlueprintType)
struct FChallengeVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPCompleteGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TokenGain;
    
    FSD_API FChallengeVariation();
};

