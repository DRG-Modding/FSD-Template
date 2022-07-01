#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "ProjectileSwitch.h"
#include "Crossbow.generated.h"

class AActor;
class UStatusEffect;
class AProjectileBase;
class ACrossbowProjectileStuck;
class UCrossbowProjectileRecallable;
class UStaticMesh;
class UAnimMontage;
class USoundCue;
class UProjectileLauncherBaseComponent;

UCLASS(Blueprintable)
class ACrossbow : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDefaultArrowEquippedChanged, bool, InDefaultArrow);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultArrowEquippedChanged OnDefaultArrowEquippedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullDamageSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> DefaultArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> SpecialArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SpecialStatusEffectBonusTimeScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> BattleFrenzyStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrossbowProjectileStuck> BasicSpawnableStuckProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpecialAmmoMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTrifork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDefaultArrowEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecallProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AnimatedArrowSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraShotAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRecallable* HoveringRecallable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchTimeCof;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TriforkArrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* QuintPackArrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProjectileSwitch> GearStatArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwitchMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwitchMontage_TP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterSwitchMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    void Server_UpdateRetrievableArrows(const int32& defaultAmmo, const int32& specialAmmo);
    
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

