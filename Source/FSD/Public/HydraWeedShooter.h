#pragma once
#include "CoreMinimal.h"
#include "ShootingPlant.h"
#include "HydraWeedShooter.generated.h"

class AHydraWeedCore;

UCLASS()
class AHydraWeedShooter : public AShootingPlant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AHydraWeedCore* Core;
    
public:
    AHydraWeedShooter();
};

