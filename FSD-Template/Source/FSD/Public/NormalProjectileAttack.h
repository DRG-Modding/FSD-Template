#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectileAttack.h"
#include "NormalProjectileAttack.generated.h"

class AProjectile;

UCLASS(BlueprintType, EditInlineNew)
class UNormalProjectileAttack : public UProjectileAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AProjectile> Projectile;
    
    UPROPERTY(EditAnywhere)
    float RandomAngle;
    
public:
    UNormalProjectileAttack();
};

