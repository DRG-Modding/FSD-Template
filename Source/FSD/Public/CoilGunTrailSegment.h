#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoilGunTrailSegment.generated.h"

UCLASS(Blueprintable)
class ACoilGunTrailSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EffectsLife, meta=(AllowPrivateAccess=true))
    float EffectsLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivationTime;
    
public:
    ACoilGunTrailSegment();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartEffects();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EffectsLife();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndEffects();
    
};

