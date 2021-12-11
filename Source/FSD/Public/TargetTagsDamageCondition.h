#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "GameplayTagContainer.h"
#include "TargetTagsDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UTargetTagsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery tagQuery;
    
public:
    UTargetTagsDamageCondition();
};

