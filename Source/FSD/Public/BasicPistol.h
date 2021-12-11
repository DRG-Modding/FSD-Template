#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BasicPistol.generated.h"

class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS()
class ABasicPistol : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ConsecutiveHitsDamageBonus;
    
    UPROPERTY(EditAnywhere)
    float ConsecutiveHitsMaxBonus;
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
public:
    ABasicPistol();
};

