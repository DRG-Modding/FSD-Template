#pragma once
#include "CoreMinimal.h"
#include "WeaponFireComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "ProjectileLauncherBaseComponent.generated.h"

class AProjectileBase;
class UItemUpgrade;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProjectileLauncherBaseComponentOnProjectileSpawned, AProjectileBase*, Projectile);

UCLASS(Abstract)
class UProjectileLauncherBaseComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseSpread;
    
    UPROPERTY(EditAnywhere)
    float VerticalSpread;
    
    UPROPERTY(EditAnywhere)
    float HorizontalSpread;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileLauncherBaseComponentOnProjectileSpawned OnProjectileSpawned;
    
protected:
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> ProjectileUpgrades;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArcStartAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TransferCharacterVelocityToProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraToMuzzleFireCheck;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Fire(FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity, AProjectileBase* DormentProjectile, bool notifyClients);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowHit();
    
public:
    UProjectileLauncherBaseComponent();
};

