#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "SupplyPodMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USupplyPodMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostModifier;
    
public:
    USupplyPodMutator();
};

