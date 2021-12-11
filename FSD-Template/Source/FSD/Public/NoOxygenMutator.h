#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "NoOxygenMutator.generated.h"

class UStatusEffect;
class UOxygenComponent;

UCLASS(EditInlineNew)
class UNoOxygenMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float OxygenReplenishmentRate;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOxygenComponent> OxygenComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UStatusEffect> ReplenishOxygenEffect;
    
public:
    UNoOxygenMutator();
};

