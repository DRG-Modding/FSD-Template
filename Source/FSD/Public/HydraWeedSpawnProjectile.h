#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "UObject/NoExportTypes.h"
#include "HydraWeedSpawnProjectile.generated.h"

UCLASS()
class AHydraWeedSpawnProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    AHydraWeedSpawnProjectile();
};

