#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicalMaterial.h"
#include "OptionalBloodPhysicalMaterial.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class UOptionalBloodPhysicalMaterial : public UFSDPhysicalMaterial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BloodlessImpactParticles;
    
public:
    UOptionalBloodPhysicalMaterial();
};

