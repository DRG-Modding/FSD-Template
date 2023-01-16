#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Projectile.h"
#include "HydraWeedSpawnProjectile.generated.h"

UCLASS(Blueprintable)
class AHydraWeedSpawnProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    AHydraWeedSpawnProjectile();
};

