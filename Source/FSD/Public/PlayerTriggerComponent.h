#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "PlayerTriggerComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerTriggerComponentOnTriggerEndEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerTriggerComponentOnTriggerBeginEvent);

UCLASS(BlueprintType)
class UPlayerTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerComponentOnTriggerBeginEvent OnTriggerBeginEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerComponentOnTriggerEndEvent OnTriggerEndEvent;
    
protected:
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* collider;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCollider(UPrimitiveComponent* NewCollider);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UPlayerTriggerComponent();
};

