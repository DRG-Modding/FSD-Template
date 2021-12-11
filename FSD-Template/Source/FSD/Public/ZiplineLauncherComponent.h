#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "WeaponFireComponent.h"
#include "Engine/NetSerialization.h"
#include "ZiplineLauncherComponent.generated.h"

class AZipLineProjectile;

UCLASS()
class UZiplineLauncherComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> HitCollisionChannel;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZipLineProjectile> projectileClass;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Fire(FVector_NetQuantize Origin, FVector_NetQuantize Destination);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit();
    
public:
    UZiplineLauncherComponent();
};

