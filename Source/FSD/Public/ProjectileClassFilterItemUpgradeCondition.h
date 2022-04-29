#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgradeCondition.h"
#include "ProjectileClassFilterItemUpgradeCondition.generated.h"

class AProjectileBase;

UCLASS(Blueprintable, EditInlineNew)
class UProjectileClassFilterItemUpgradeCondition : public UItemUpgradeCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AProjectileBase>> ProjectileClasses;
    
public:
    UProjectileClassFilterItemUpgradeCondition();
};

