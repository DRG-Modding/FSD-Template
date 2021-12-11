#pragma once
#include "CoreMinimal.h"
#include "HostileGuntowerModule.h"
#include "UObject/NoExportTypes.h"
#include "RandomFiringGuntowerModule.generated.h"

class UAudioComponent;
class UStaticMeshComponent;
class UDamageComponent;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS()
class ARandomFiringGuntowerModule : public AHostileGuntowerModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* LaserFrontTop;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* LaserFrontBottom;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* LaserBackTop;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* LaserBackBottom;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* FrontTopLaserMuzzle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* FrontBottomLaserMuzzle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* BackTopLaserMuzzle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* BackBottomLaserMuzzle;
    
protected:
    UPROPERTY(Replicated, Transient)
    FRotator OtherCurrentRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* LaserImpact;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* LaserSound;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoneSpaceTurretMaxYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoneSpaceTurretMaxPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenAttacks;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimeUntilNextAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ModuleRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurretAimSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LaserLeghtRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenHits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlatformDissolveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlatformDissolveSqueeze;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsAttacking;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARandomFiringGuntowerModule();
};

