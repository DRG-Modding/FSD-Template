#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ElectroBeam.generated.h"

class UAudioComponent;
class UCapsuleComponent;
class UHealthComponentBase;
class UParticleSystemComponent;
class USceneComponent;
class UStatusEffect;

UCLASS(Abstract, Blueprintable)
class AElectroBeam : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* collider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ParentPlants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SourceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_SourceComponent, meta=(AllowPrivateAccess=true))
    USceneComponent* SourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_TargetComponent, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* DelaySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* DelayTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ZappSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUnlitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUnlitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldFlicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Flag, meta=(AllowPrivateAccess=true))
    bool IsLit;
    
public:
    AElectroBeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTargetComponent(USceneComponent* TargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceComponent(USceneComponent* SourcePoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetParents(AActor* firstParent, AActor* secondParent);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateBeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SourceComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Flag();
    
    UFUNCTION(BlueprintCallable)
    void OnParentDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* GetParticleEffect();
    
    UFUNCTION(BlueprintCallable)
    UCapsuleComponent* GetCollider();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* GetAudio();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCollisionAndEffect();
    
};

