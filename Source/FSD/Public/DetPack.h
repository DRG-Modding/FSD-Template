#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "DetPack.generated.h"

class UProjectileMovementComponent;
class ADetPackItem;
class USingleUsableComponent;
class UExplosionComponent;
class USimpleHealthComponent;
class APlayerCharacter;
class UHealthComponentBase;

UCLASS(Blueprintable)
class ADetPack : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float UpgradedStaggerChance;
    
    UPROPERTY(EditAnywhere)
    float UpgradedStaggerDuration;
    
    UPROPERTY(EditAnywhere)
    float UpgradedFearFactor;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float VisualDamageRadius;
    
    UPROPERTY(EditAnywhere, Transient)
    float IncreasedFearRadius;
    
    UPROPERTY(EditAnywhere, Transient)
    float IncreasedStaggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UExplosionComponent* Explosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UseComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* SimpleHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADetPackItem* Detonator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HasExploded, meta=(AllowPrivateAccess=true))
    bool HasExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsMoving, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ExplodesOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasExtraStaggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

