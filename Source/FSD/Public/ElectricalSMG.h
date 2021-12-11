#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ElectricalSMG.generated.h"

class UStatusEffect;
class UParticleSystem;
class UPrimitiveComponent;
class USoundCue;
class UFSDPhysicalMaterial;
class UHealthComponentBase;

UCLASS()
class AElectricalSMG : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> AoEStatusEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* AoEParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* AoESound;
    
    UPROPERTY(EditAnywhere)
    float AoEStatusEffectChance;
    
    UPROPERTY(EditAnywhere)
    float AoEStatusEffectRange;
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectPushed(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnAoETriggered(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal) const;
    
public:
    AElectricalSMG();
};

