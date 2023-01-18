#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Tether.generated.h"

class UCarriableComponent;
class UDamageComponent;
class UInstantUsable;
class UNiagaraComponent;
class UParticleSystem;
class USkeletalMeshComponent;
class USoundCue;
class USphereComponent;

UCLASS(Blueprintable)
class FSD_API ATether : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstantUsable* UsableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCarriableComponent* Carry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* UseTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TetherBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PysicalCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* ExplosionDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
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

