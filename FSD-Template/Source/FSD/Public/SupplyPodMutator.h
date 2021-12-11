#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "SupplyPodMutator.generated.h"

UCLASS(EditInlineNew)
class USupplyPodMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CostModifier;
    
public:
    USupplyPodMutator();
};

