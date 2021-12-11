#pragma once
#include "CoreMinimal.h"
#include "CreditsReward.generated.h"

USTRUCT(BlueprintType)
struct FCreditsReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;
    
    FSD_API FCreditsReward();
};

