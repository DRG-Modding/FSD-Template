#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Projectile.h"
#include "PlatformProjectile.generated.h"

UCLASS(Blueprintable)
class FSD_API APlatformProjectile : public AProjectile {
    GENERATED_BODY()
public:
    APlatformProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MeltPlatformAroundPlayers(FVector platformLocation);
    
};

