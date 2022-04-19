#pragma once
#include "CoreMinimal.h"
#include "AudioWithCooldown.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FAudioWithCooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
public:
    FSD_API FAudioWithCooldown();
};

