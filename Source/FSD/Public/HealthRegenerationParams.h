#pragma once
#include "CoreMinimal.h"
#include "HealthRegenerationParams.generated.h"

USTRUCT(BlueprintType)
struct FHealthRegenerationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRegenerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHealthRatio;
    
    FSD_API FHealthRegenerationParams();
};

