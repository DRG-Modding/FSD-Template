#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GooPuddleStatusEffectTrigger.h"
#include "GooGunPuddle.generated.h"

class USphereComponent;
class USimpleHealthComponent;
class UPrimitiveComponent;
class USoundBase;
class UStatusEffect;
class UDamageClass;

UCLASS()
class AGooGunPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereTrigger;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* SimpleHealth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGooPuddleStatusEffectTrigger> StatusEffectTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<TSubclassOf<UStatusEffect>> InflictedStatusEffects;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveStatusEffectTriggersMask)
    int32 ActiveStatusEffectTriggersMask;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float LifeTime;
    
public:
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
    void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGooGunPuddle();
};

