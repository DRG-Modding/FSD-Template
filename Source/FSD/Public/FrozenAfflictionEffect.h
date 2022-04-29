#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "FrozenAfflictionItem.h"
#include "FrozenAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class UFrozenAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrozenAfflictionItem> IceParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> IceMaterials;
    
public:
    UFrozenAfflictionEffect();
};

