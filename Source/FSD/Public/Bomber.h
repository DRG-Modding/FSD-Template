#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AFlyingBug.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Bomber.generated.h"

class UParticleSystemComponent;
class UPrimitiveComponent;
class UAudioComponent;
class USoundBase;
class UParticleSystem;
class AProjectile;
class AActor;

UCLASS()
class ABomber : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* GooSoundComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* AcidEmitterLeft;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* AcidEmitterRight;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AProjectile> AcidProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* deathSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* DeathPanicSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* BleedParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* BladderDestroyedNoise;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UParticleSystemComponent> BleedParticlesComponent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UAudioComponent> PanicAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RagdollForceModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeathYRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeathXRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchRange;
    
    UPROPERTY(EditDefaultsOnly)
    float NewPointMax;
    
    UPROPERTY(EditDefaultsOnly)
    float NewPointMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeathSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DeathAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AcidRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PostDeathAcidTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Death)
    bool HasDied;
    
    UPROPERTY(Replicated, Transient)
    bool IsRightDestroyed;
    
    UPROPERTY(Replicated, Transient)
    bool IsLeftDestroyed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DropAcid)
    bool dropAcid;
    
    UFUNCTION(BlueprintCallable)
    void StopSpinAndDie();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDropAcid(bool NewDropAcid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDeathPanic();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DropAcid();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Death();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRagdollHitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBladderDamage(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorDestroyed(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void HideMesh();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDropAcid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBladdersDestroyed() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ABomber();
};

