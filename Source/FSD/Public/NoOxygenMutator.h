#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "NoOxygenMutator.generated.h"

class UStatusEffect;
class UOxygenComponent;

UCLASS(Blueprintable, EditInlineNew)
class UNoOxygenMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float OxygenReplenishmentRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOxygenComponent> OxygenComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStatusEffect> ReplenishOxygenEffect;
    
public:
    UNoOxygenMutator();
};

