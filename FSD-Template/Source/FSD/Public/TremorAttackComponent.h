#pragma once
#include "CoreMinimal.h"
#include "SpecialDamageAttackComponent.h"
#include "Engine/EngineTypes.h"
#include "TremorAttackComponent.generated.h"

class UParticleSystemComponent;
class UBoxComponent;
class UPrimitiveComponent;
class AActor;

UCLASS()
class FSD_API UTremorAttackComponent : public USpecialDamageAttackComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsAttackActive)
    bool IsAttackActive;
    
    UPROPERTY(Export, Transient)
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ParticlesComponent;
    
    UPROPERTY(EditAnywhere)
    float InitialParticlesDelay;
    
    UPROPERTY(EditAnywhere)
    float PostParticleDelay;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxDistanceFromGround;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenDamageTicks;
    
    UPROPERTY(EditAnywhere)
    float LaunchForce;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UFUNCTION(BlueprintCallable)
    void StopParticles();
    
    UFUNCTION(BlueprintCallable)
    void StartParticles();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetExitedTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAttackActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInited() const;
    
    UFUNCTION(BlueprintCallable)
    void InitTremorAttack(UBoxComponent* Box, UParticleSystemComponent* Particles);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTremorAttackComponent();
};

