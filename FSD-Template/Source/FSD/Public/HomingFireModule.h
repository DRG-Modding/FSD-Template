#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HostileTargetingGuntowerModule.h"
#include "HomingFireModule.generated.h"

class AProjectile;

UCLASS()
class AHomingFireModule : public AHostileTargetingGuntowerModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShootDroneSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectile> HomingProjectileClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenShots;
    
public:
    AHomingFireModule();
};

