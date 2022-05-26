#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "StaggeredAfflictionEffect.generated.h"

UCLASS(Blueprintable)
class UStaggeredAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerStrength;
    
public:
    UStaggeredAfflictionEffect();
};

