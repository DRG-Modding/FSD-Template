#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "TaggedActor.h"
#include "Targetable.h"
#include "Templates/SubclassOf.h"
#include "WormSpawnDelegateDelegate.h"
#include "WormPod.generated.h"

class AActor;
class UAnimMontage;
class UEnemyDescriptor;
class UFXSystemAsset;
class UHealthComponentBase;
class USceneComponent;
class USimpleHealthComponent;
class USkeletalMeshComponent;
class USoundCue;

UCLASS(Blueprintable)
class AWormPod : public ATaggedActor, public ITargetable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ScalePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PodMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* Health;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWormSpawnDelegate OnWormSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Grown, meta=(AllowPrivateAccess=true))
    bool Grown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GrowthAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CarcasActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GrowthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* WormDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* PopParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParentDeathDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDelayVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WormCount;
    
public:
    AWormPod();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnWorms();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Grown();
    
    UFUNCTION(BlueprintCallable)
    void OnParentDeath(UHealthComponentBase* ParentHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* aHealth);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAnimEnded(UAnimMontage* Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Kill();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowDeath(bool success);
    
    
    // Fix for true pure virtual functions not being implemented
};

