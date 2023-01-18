#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ECrossbowEffectApplication.h"
#include "OnCrossbowDamageDealtDelegate.h"
#include "Projectile.h"
#include "Templates/SubclassOf.h"
#include "CrossbowProjectileBase.generated.h"

class ACrossbowProjectileStuck;
class UCrossbowProjectileMagnetic;
class UCrossbowProjectileRecallable;
class UCrossbowProjectileRicochet;
class UCrossbowStuckProjectileEffectBanshee;
class UDamageComponent;
class UNiagaraComponent;
class USoundCue;
class UStaticMesh;
class UStatusEffect;
class UTexture2D;

UCLASS(Blueprintable)
class ACrossbowProjectileBase : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossbowDamageDealt OnDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatusEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BansheePulseActive, meta=(AllowPrivateAccess=true))
    bool BansheePulseActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileMagnetic* MagneticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRicochet* RicochetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrossbowStuckProjectileEffectBanshee* BansheeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BansheePulseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrossbowStuckProjectileEffectBanshee> BansheeComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrossbowProjectileRecallable> RecallComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TriforkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrossbowProjectileStuck> SpawnableStuckProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossbowEffectApplication EffectApplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEverBePickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Penetrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsASpecialProjectile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* MainDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* SimpleDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillTrailAfterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnlyTrailShown, meta=(AllowPrivateAccess=true))
    bool OnlyTrailShown;
    
public:
    ACrossbowProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSimpleDamageComponentFromBP();
    
    UFUNCTION(BlueprintCallable)
    void SetSimpleDamageComponent(UDamageComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainDamageComponentFromBP();
    
    UFUNCTION(BlueprintCallable)
    void SetMainDamageComponent(UDamageComponent* Component);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleImpact(const FHitResult& HitResult, const FVector& RelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlyTrailShown();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_BansheePulseActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecialArrowEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledStatusEffectTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyDamageEffects(const FHitResult& HitResult, const FVector& RelativeLocation);
    
};

