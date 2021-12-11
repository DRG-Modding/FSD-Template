#pragma once
#include "CoreMinimal.h"
#include "DeathIntroSettings.generated.h"

USTRUCT(BlueprintType)
struct FDeathIntroSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FirstPersonDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeToBlackDelay;
    
    UPROPERTY(EditAnywhere)
    float FadeToBlackDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeFromBlackDelay;
    
    UPROPERTY(EditAnywhere)
    float FadeFromBlackDuration;
    
    UPROPERTY(EditAnywhere)
    float ZoomOutDuration;
    
    UPROPERTY(EditAnywhere)
    float ZoomOutStartDistance;
    
    FSD_API FDeathIntroSettings();
};

