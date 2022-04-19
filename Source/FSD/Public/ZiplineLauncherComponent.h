#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "WeaponFireComponent.h"
#include "Engine/NetSerialization.h"
#include "ZiplineLauncherComponent.generated.h"

class AZipLineProjectile;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZiplineLauncherComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> HitCollisionChannel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZipLineProjectile> ProjectileClass;
    
public:
    UZiplineLauncherComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Fire(FVector_NetQuantize Origin, FVector_NetQuantize Destination);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit();
    
};

