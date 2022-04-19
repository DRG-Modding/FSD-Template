#pragma once
#include "CoreMinimal.h"
#include "EPlasmaCarbineConditions.h"
#include "DamageCondition.h"
#include "PlasmaCarbineDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UPlasmaCarbineDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlasmaCarbineConditions WeaponCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Condition;
    
public:
    UPlasmaCarbineDamageCondition();
};

