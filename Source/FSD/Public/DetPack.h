#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "DetPack.generated.h"

class USingleUsableComponent;
class USimpleHealthComponent;
class UProjectileMovementComponent;
class UExplosionComponent;
class ADetPackItem;
class APlayerCharacter;
class UHealthComponentBase;

UCLASS()
class ADetPack : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradedStaggerChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradedStaggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradedFearFactor;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float VisualDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float IncreasedFearRadius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float IncreasedStaggerRadius;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UExplosionComponent* Explosion;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UseComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* SimpleHealth;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ADetPackItem* Detonator;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_HasExploded, meta=(AllowPrivateAccess=true))
    bool HasExploded;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ExplodesOnDeath;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasExtraStaggerRadius;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasExtraFearRadius;
    
public:
    ADetPack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UseFearStaggerUpgrades();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveHitObject();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMoving();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasExploded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExploded();
    
    UFUNCTION(BlueprintCallable)
    void OnDetPackPickedUp(APlayerCharacter* User, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDetPackDeath(UHealthComponentBase* HealthComponent);
    
};

