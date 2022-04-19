#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "WeaponFireEndedDelegateDelegate.h"
#include "Upgradable.h"
#include "WeaponFiredDelegateDelegate.h"
#include "WeaponRicochetDelegateDelegate.h"
#include "WeaponFireComponent.generated.h"

class UWeaponFireOwner;
class IWeaponFireOwner;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class UWeaponFireComponent : public UActorComponent, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWeaponFiredDelegate OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWeaponFireEndedDelegate OnWeaponFireEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWeaponRicochetDelegate OnRicochetEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IWeaponFireOwner> Weapon;
    
public:
    UWeaponFireComponent();
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetShotPower(float shotPower);
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX);
    
    
    // Fix for true pure virtual functions not being implemented
};

