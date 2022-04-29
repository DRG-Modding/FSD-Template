#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BasicPistol.generated.h"

class UPrimitiveComponent;
class UHealthComponentBase;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ABasicPistol : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ConsecutiveHitsDamageBonus;
    
    UPROPERTY(EditAnywhere)
    float ConsecutiveHitsMaxBonus;
    
public:
    ABasicPistol();
protected:
    UFUNCTION()
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
};

