#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicalMaterial.h"
#include "OptionalBloodPhysicalMaterial.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories)
class UOptionalBloodPhysicalMaterial : public UFSDPhysicalMaterial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* BloodlessImpactParticles;
    
public:
    UOptionalBloodPhysicalMaterial();
};

