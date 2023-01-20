#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "Upgradable.h"
#include "WeaponFireEndedDelegateDelegate.h"
#include "WeaponFiredDelegateDelegate.h"
#include "WeaponRicochetDelegateDelegate.h"
#include "WeaponFireComponent.generated.h"

class IWeaponFireOwner;
class UWeaponFireOwner;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponFireComponent : public UActorComponent, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFiredDelegate OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFireEndedDelegate OnWeaponFireEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponRicochetDelegate OnRicochetEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IWeaponFireOwner> Weapon;
    
public:
    UWeaponFireComponent();
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetShotPower(float shotPower);
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX);
    
    
    // Fix for true pure virtual functions not being implemented
};

