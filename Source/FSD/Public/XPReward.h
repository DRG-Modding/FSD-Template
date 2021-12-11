#pragma once
#include "CoreMinimal.h"
#include "XPReward.generated.h"

USTRUCT(BlueprintType)
struct FXPReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 XP;
    
    FSD_API FXPReward();
};

