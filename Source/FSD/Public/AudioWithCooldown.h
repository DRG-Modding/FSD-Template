#pragma once
#include "CoreMinimal.h"
#include "AudioWithCooldown.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FAudioWithCooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* Audio;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
public:
    FSD_API FAudioWithCooldown();
};

