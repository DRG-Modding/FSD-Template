#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BoscoAbillity.h"
#include "BoscoProjectileAbillity.generated.h"

class AProjectile;

UCLASS()
class UBoscoProjectileAbillity : public UBoscoAbillity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AProjectile> projectileClass;
    
    UBoscoProjectileAbillity();
};

