#pragma once
#include "CoreMinimal.h"
#include "ShootingPlant.h"
#include "HydraWeedShooter.generated.h"

class AHydraWeedCore;

UCLASS(Blueprintable)
class AHydraWeedShooter : public AShootingPlant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHydraWeedCore* Core;
    
public:
    AHydraWeedShooter();
};

