#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "ProjectileUpgradeElement.generated.h"

class UParticleSystem;

UCLASS(EditInlineNew)
class UProjectileUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NewTrailParticle;
    
public:
    UProjectileUpgradeElement();
};

