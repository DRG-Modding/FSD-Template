#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ElectricalSMG.generated.h"

class UPrimitiveComponent;
class UStatusEffect;
class USoundCue;
class UParticleSystem;
class UHealthComponentBase;
class UFSDPhysicalMaterial;

UCLASS()
class AElectricalSMG : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> AoEStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AoEParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AoESound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoEStatusEffectChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AoEStatusEffectRange;
    
public:
    AElectricalSMG();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectPushed(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnAoETriggered(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal) const;
    
};

