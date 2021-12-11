#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "FrozenAfflictionItem.h"
#include "FrozenAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS(Abstract)
class UFrozenAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FFrozenAfflictionItem> IceParts;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(EditAnywhere)
    FName ParticleBone;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> IceMaterials;
    
public:
    UFrozenAfflictionEffect();
};

