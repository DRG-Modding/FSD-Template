#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "ECrossbowSwitchState.h"
#include "ProjectileSwitch.h"
#include "Templates/SubclassOf.h"
#include "Crossbow.generated.h"

class AActor;
class ACrossbowProjectileStuck;
class AProjectileBase;
class UAnimMontage;
class UCrossbowProjectileRecallable;
class UProjectileLauncherBaseComponent;
class USoundCue;
class UStaticMesh;
class UStaticMeshComponent;
class UStatusEffect;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDefaultArrowEquipped, meta=(AllowPrivateAccess=true))
    bool IsDefaultArrowEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecallProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AnimatedFPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AnimatedTPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SwitchIsQueued, meta=(AllowPrivateAccess=true))
    bool SwitchIsQueued;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECrossbowSwitchState SwitchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfAmmoSwapDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AnimatedArrowSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraShotAngleDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadMontage_TP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterReloadMontage;
    
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
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimatedTPMeshComponentFromBP(AActor* animatedArrow);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimatedTPMeshComponent(UStaticMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimatedFPMeshComponentFromBP(AActor* animatedArrow);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimatedFPMeshComponent(UStaticMeshComponent* Component);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateRetrievableArrows(const int32& defaultAmmo, const int32& specialAmmo);
    
    UFUNCTION(Reliable, Server)
    void Server_SwitchAmmoType(UProjectileLauncherBaseComponent* projectileLauncher, const ECrossbowSwitchState State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSwitchIsQueued(bool IsQueued);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SwitchIsQueued();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDefaultArrowEquipped();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileFired(AProjectileBase* Projectile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalArrowCount(bool InDefaultArrowCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialArrowEffectDuration(const TSubclassOf<UStatusEffect>& Effect) const;
    
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
    
};

