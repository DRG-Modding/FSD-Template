#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EFrozenAfflictionType.h"
#include "ScalingMeshAfflictionItem.h"
#include "ScalingMeshAfflictionEffect.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class UScalingMeshAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenAfflictionType AfflictionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalingMeshAfflictionItem> IceParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> IceMaterials;
    
public:
    UScalingMeshAfflictionEffect();
};

