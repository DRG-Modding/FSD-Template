#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgradeCondition.h"
#include "ProjectileClassFilterItemUpgradeCondition.generated.h"

class AProjectileBase;

UCLASS(EditInlineNew)
class UProjectileClassFilterItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AProjectileBase>> ProjectileClasses;
    
public:
    UProjectileClassFilterItemUpgradeCondition();
};

