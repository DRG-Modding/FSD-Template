#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileAttack.h"
#include "NormalProjectileAttack.generated.h"

class AProjectile;

UCLASS(Blueprintable, EditInlineNew)
class UNormalProjectileAttack : public UProjectileAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngle;
    
public:
    UNormalProjectileAttack();
};

