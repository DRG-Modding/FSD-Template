#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "StatusEffectTriggerComponent.generated.h"

class AActor;
class UStatusEffect;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatusEffectTriggerComponentOnEffectTriggered, AActor*, TargetActor, bool, entered);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatusEffectTriggerComponentOnActorEnterLeave, AActor*, TargetActor, bool, entered);

UCLASS(BlueprintType)
class UStatusEffectTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FStatusEffectTriggerComponentOnEffectTriggered OnEffectTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FStatusEffectTriggerComponentOnActorEnterLeave OnActorEnterLeave;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> LeaveTriggerEffects;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPrimitiveComponent* collider;
    
    UPROPERTY(EditAnywhere)
    bool RemoveStatusEffectOnEndOverlap;
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UStatusEffectTriggerComponent();
};

