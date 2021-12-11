#pragma once
#include "CoreMinimal.h"
#include "ChallengeVariation.generated.h"

USTRUCT(BlueprintType)
struct FChallengeVariation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumberOfWins;
    
    UPROPERTY(EditAnywhere)
    int32 XPCompleteGain;
    
    UPROPERTY(EditAnywhere)
    int32 TokenGain;
    
    FSD_API FChallengeVariation();
};

