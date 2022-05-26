#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HostileTargetingGuntowerModule.h"
#include "HomingFireModule.generated.h"

class AProjectile;

UCLASS(Blueprintable)
class AHomingFireModule : public AHostileTargetingGuntowerModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShootDroneSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> HomingProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenShots;
    
public:
    AHomingFireModule();
};

