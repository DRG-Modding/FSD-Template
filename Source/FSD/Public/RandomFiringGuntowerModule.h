#pragma once
#include "CoreMinimal.h"
#include "HostileGuntowerModule.h"
#include "UObject/NoExportTypes.h"
#include "RandomFiringGuntowerModule.generated.h"

class UStaticMeshComponent;
class UDamageComponent;
class UParticleSystemComponent;
class UAudioComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class ARandomFiringGuntowerModule : public AHostileGuntowerModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserFrontTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserFrontBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserBackTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserBackBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontTopLaserMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontBottomLaserMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackTopLaserMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackBottomLaserMuzzle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator OtherCurrentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* LaserSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(EditAnywhere)
    float BoneSpaceTurretMaxYaw;
    
    UPROPERTY(EditAnywhere)
    float BoneSpaceTurretMaxPitch;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenAttacks;
    
    UPROPERTY(EditAnywhere, Transient)
    float TimeUntilNextAttack;
    
    UPROPERTY(EditAnywhere)
    float ModuleRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float TurretAimSpeed;
    
    UPROPERTY(EditAnywhere)
    float LaserLeghtRatio;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenHits;
    
    UPROPERTY(EditAnywhere)
    float ChanceToInvert;
    
    UPROPERTY(EditAnywhere)
    float PlatformDissolveRadius;
    
    UPROPERTY(EditAnywhere)
    float PlatformDissolveSqueeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsAttacking;
    
public:
    ARandomFiringGuntowerModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

