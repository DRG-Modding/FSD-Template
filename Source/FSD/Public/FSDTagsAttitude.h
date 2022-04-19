#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FSDTagsAttitude.generated.h"

USTRUCT(BlueprintType)
struct FFSDTagsAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Neutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Hostile;
    
    FSD_API FFSDTagsAttitude();
};

