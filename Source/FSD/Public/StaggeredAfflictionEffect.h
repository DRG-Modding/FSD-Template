#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "StaggeredAfflictionEffect.generated.h"

UCLASS()
class UStaggeredAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StaggerStrength;
    
public:
    UStaggeredAfflictionEffect();
};

