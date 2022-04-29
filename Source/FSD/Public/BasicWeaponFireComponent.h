#pragma once
#include "CoreMinimal.h"
#include "WeaponFireComponent.h"
#include "BasicWeaponFireComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBasicWeaponFireComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UBasicWeaponFireComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FireWeapon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EndFire();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_WeaponFired();
    
};

