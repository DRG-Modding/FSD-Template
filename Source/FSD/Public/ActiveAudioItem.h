#pragma once
#include "CoreMinimal.h"
#include "ActiveAudioItem.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FActiveAudioItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UAudioComponent* Audio;
    
    UPROPERTY(Transient)
    float FadeoutDuration;
    
    FSD_API FActiveAudioItem();
};

