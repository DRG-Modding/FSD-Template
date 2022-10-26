#pragma once
#include "CoreMinimal.h"
#include "TaggedActor.h"
#include "Targetable.h"
#include "Curves/CurveFloat.h"
#include "WormSpawnDelegateDelegate.h"
#include "WormPod.generated.h"

class USceneComponent;
class USimpleHealthComponent;
class UEnemyDescriptor;
class USoundCue;
class UFXSystemAsset;
class UHealthComponentBase;

UCLASS(Blueprintable)
class AWormPod : public ATaggedActor, public ITargetable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ScalePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* Health;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWormSpawnDelegate OnWormSpawned;
    
protected:
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
protected:
    UFUNCTION(BlueprintCallable)
    void OnParentDeath(UHealthComponentBase* ParentHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* aHealth);
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowDeath(bool success);
    
    
    // Fix for true pure virtual functions not being implemented
};

