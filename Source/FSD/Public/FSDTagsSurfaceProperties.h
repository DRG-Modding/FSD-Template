#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FSDTagsSurfaceProperties.generated.h"

USTRUCT(BlueprintType)
struct FFSDTagsSurfaceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MovingPlatform;
    
    FSD_API FFSDTagsSurfaceProperties();
};

