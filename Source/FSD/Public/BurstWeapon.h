#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BurstWeapon.generated.h"

class UDamageComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABurstWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* BurstFireBonusDamage;
    
public:
    ABurstWeapon(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToFire();
    
};

