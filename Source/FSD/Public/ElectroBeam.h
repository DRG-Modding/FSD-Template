#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ElectroBeam.generated.h"

class UCapsuleComponent;
class UParticleSystemComponent;
class USceneComponent;
class UAudioComponent;
class UStatusEffect;
class UHealthComponentBase;

UCLASS(Abstract)
class AElectroBeam : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* collider;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ParentPlants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SourceLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize SourceLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_TargetLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* DelaySource;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* DelayTarget;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamEffect;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
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
    
private:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Flag, meta=(AllowPrivateAccess=true))
    bool IsLit;
    
public:
    AElectroBeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(USceneComponent* TargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSource(USceneComponent* SourcePoint);
    
    UFUNCTION(BlueprintCallable)
    void SetParents(AActor* firstParent, AActor* secondParent);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateBeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SourceLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Flag();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnParentDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* GetParticleEffect();
    
    UFUNCTION(BlueprintCallable)
    UCapsuleComponent* GetCollider();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* GetAudio();
    
    UFUNCTION(BlueprintCallable)
    void DelayedSetTarget(USceneComponent* TargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void DelayedSetSource(USceneComponent* SourcePoint);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCollisionAndEffect();
    
};

