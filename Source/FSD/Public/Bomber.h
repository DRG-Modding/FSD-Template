#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AFlyingBug.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Bomber.generated.h"

class UParticleSystem;
class UAudioComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class AProjectile;
class AActor;
class USoundBase;

UCLASS()
class ABomber : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* GooSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AcidEmitterLeft;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AcidEmitterRight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> AcidProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* deathSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* DeathPanicSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* BleedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* BladderDestroyedNoise;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> BleedParticlesComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> PanicAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float RagdollForceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DeathYRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DeathXRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float NewPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float NewPointMin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DeathSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DeathAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float AcidRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float PostDeathAcidTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Death, meta=(AllowPrivateAccess=true))
    bool HasDied;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsRightDestroyed;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsLeftDestroyed;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_DropAcid, meta=(AllowPrivateAccess=true))
    bool dropAcid;
    
public:
    ABomber();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

