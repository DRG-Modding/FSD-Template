#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "ProjectileSwitch.h"
#include "Crossbow.generated.h"

class AProjectileBase;
class UStatusEffect;
class UCrossbowProjectileRecallable;
class AActor;
class ACrossbowProjectileStuck;
class UStaticMesh;
class UAnimMontage;
class UProjectileLauncherBaseComponent;
class USoundCue;

UCLASS()
class ACrossbow : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefaultArrowEquippedChanged, bool, InDefaultArrow);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDefaultArrowEquippedChanged OnDefaultArrowEquippedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FullDamageSpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> DefaultArrow;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> SpecialArrow;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    float SpecialStatusEffectBonusTimeScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> BattleFrenzyStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrossbowProjectileStuck> BasicSpawnableStuckProjectile;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 SpecialAmmoMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SwitchTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool CanTrifork;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDefaultArrowEquipped;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RecallProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AnimatedArrowSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 AmountOfExtraShots;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ExtraShotAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRecallable* HoveringRecallable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SwitchTimeCof;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UStaticMesh* TriforkArrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UStaticMesh* QuintPackArrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FProjectileSwitch> GearStatArrows;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwitchMontage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwitchMontage_TP;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterSwitchMontage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<USoundCue*> ReloadSoundCues;
    
public:
    ACrossbow();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRecallProgress();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartAmmoSwitch();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CallSwitchAmmoType(UProjectileLauncherBaseComponent* projectileLauncher);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileFired(AProjectileBase* Projectile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalArrowCount(bool InDefaultArrowCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialArrowEffectDuration(const TSubclassOf<UStatusEffect>& effect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDefaultArrowEquipped() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RefillSpecialAmmo(float percentage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CallAddSpecialAmmo(const int32& Amount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CallAddDefaultAmmo(const int32& Amount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SetTPReloadAnim(UAnimMontage* TPMontage, UAnimMontage* WeaponMontage);
    
};

