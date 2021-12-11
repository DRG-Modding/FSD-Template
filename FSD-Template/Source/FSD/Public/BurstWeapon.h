#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BurstWeapon.generated.h"

class UDamageComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS()
class ABurstWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* BurstFireBonusDamage;
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToFire();
    
    ABurstWeapon();
};

