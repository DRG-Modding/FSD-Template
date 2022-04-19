#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Projectile.h"
#include "OnCrossbowDamageDealtDelegate.h"
#include "ECrossbowEffectApplication.h"
#include "EInputKeys.h"
#include "Engine/EngineTypes.h"
#include "CrossbowProjectileBase.generated.h"

class ACrossbowProjectileStuck;
class UCrossbowProjectileRecallable;
class UCrossbowProjectileMagnetic;
class UCrossbowProjectileRicochet;
class USceneComponent;
class USoundCue;
class UCrossbowStuckProjectileEffectBanshee;
class UTexture2D;
class UStatusEffect;
class UStaticMesh;
class APlayerCharacter;

UCLASS()
class ACrossbowProjectileBase : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float StatusEffectTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRecallable* RecallComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileMagnetic* MagneticComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRicochet* RicochetComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowStuckProjectileEffectBanshee* BansheeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrossbowStuckProjectileEffectBanshee> BansheeComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrossbowProjectileRecallable> RecallComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TriforkIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnCrossbowDamageDealt OnDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrossbowProjectileStuck> SpawnableStuckProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    ECrossbowEffectApplication EffectApplication;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 SelectionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool CanEverBePickedUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool Penetrates;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UStaticMesh* ProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float KillTrailAfterTime;
    
public:
    ACrossbowProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* Player, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecialArrowEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledStatusEffectTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyDamageEffects(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SetBansheePulseVisible(bool Enabled);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnCavePointRemoved(USceneComponent* Point);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_HideEverythingButTrail(bool NewVisibility);
    
};

