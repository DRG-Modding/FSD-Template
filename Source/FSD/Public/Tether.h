#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Tether.generated.h"

class UInstantUsable;
class USkeletalMeshComponent;
class UCarriableComponent;
class UParticleSystem;
class UNiagaraComponent;
class USphereComponent;
class UDamageComponent;
class USoundCue;

UCLASS()
class FSD_API ATether : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInstantUsable* UsableComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCarriableComponent* Carry;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* UseTrigger;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TetherBeam;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* PysicalCollision;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* ExplosionDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackForce;
    
public:
    ATether();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsOnGround(bool NewIsOnGround);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDronePickup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneDrop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Explode();
    
};

