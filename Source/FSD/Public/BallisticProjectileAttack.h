#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileAttack.h"
#include "BallisticProjectileAttack.generated.h"

class AProjectile;

UCLASS(Blueprintable, EditInlineNew)
class UBallisticProjectileAttack : public UProjectileAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> Projectile;
    
    UPROPERTY(EditAnywhere)
    float ProjectileArc;
    
    UPROPERTY(EditAnywhere)
    float Gravity;
    
public:
    UBallisticProjectileAttack();
};

