#pragma once
#include "CoreMinimal.h"
#include "XPReward.generated.h"

USTRUCT(BlueprintType)
struct FXPReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    FSD_API FXPReward();
};

