#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EffectTriggeredDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectTriggerComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatusEffectTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectTriggeredDelegate OnEffectTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectTriggeredDelegate OnActorEnterLeave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> LeaveTriggerEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* collider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveStatusEffectOnEndOverlap;
    
public:
    UStatusEffectTriggerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddActorToIgnoreList(AActor* Actor);
    
};

