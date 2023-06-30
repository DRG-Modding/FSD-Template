#pragma once
#include "CoreMinimal.h"
#include "ECrossbowStuckType.h"
#include "EInputKeys.h"
#include "FSDPhysicsActor.h"
#include "Templates/SubclassOf.h"
#include "CrossbowProjectileStuck.generated.h"

class ACrossbowProjectileBase;
class APlayerCharacter;
class UCrossbowProjectileRecallable;
class UCrossbowStuckProjectileEffectBanshee;
class UHealthComponentBase;
class UNiagaraComponent;
class USceneComponent;
class USphereComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class ACrossbowProjectileStuck : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BansheePulseEnabled, meta=(AllowPrivateAccess=true))
    bool BansheePulseEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRecallable* RecallComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowStuckProjectileEffectBanshee* BansheeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossbowStuckType StuckProjectileEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingElectricRangeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> AppliedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StatusEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* AttachmentRoot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BansheePulseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USphereComponent* LaserCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileBase* BaseProjectile;
    
public:
    ACrossbowProjectileStuck();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UsableChanged(bool CanUse);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* Player, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BansheePulseEnabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void MatchParentDestroy(UHealthComponentBase* destroyed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecialArrowEquipped() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnCavePointRemoved(USceneComponent* Point);
    
};

