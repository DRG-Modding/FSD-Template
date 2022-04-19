#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GooPuddleStatusEffectTrigger.h"
#include "DamageData.h"
#include "GooGunPuddle.generated.h"

class USoundBase;
class USphereComponent;
class USimpleHealthComponent;
class UPrimitiveComponent;
class UStatusEffect;

UCLASS()
class AGooGunPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereTrigger;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* SimpleHealth;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FGooPuddleStatusEffectTrigger> StatusEffectTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> InflictedStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ActiveStatusEffectTriggersMask, meta=(AllowPrivateAccess=true))
    int32 ActiveStatusEffectTriggersMask;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
public:
    AGooGunPuddle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusEffectAdded(const FGooPuddleStatusEffectTrigger& Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveStatusEffectTriggersMask(int32 PreviousMask);
    
    UFUNCTION(BlueprintCallable)
    void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect);
    
};

