#pragma once
#include "CoreMinimal.h"
#include "BoscoAbillity.h"
#include "Templates/SubclassOf.h"
#include "BoscoProjectileAbillity.generated.h"

class AProjectile;

UCLASS(Blueprintable)
class UBoscoProjectileAbillity : public UBoscoAbillity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UBoscoProjectileAbillity();
};

