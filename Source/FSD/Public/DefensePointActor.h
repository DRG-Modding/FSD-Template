#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EDefendPointState.h"
#include "EInputKeys.h"
#include "DefensePointActor.generated.h"

class AGameEvent;
class USingleUsableComponent;
class APlayerCharacter;

UCLASS(Abstract)
class ADefensePointActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AGameEvent> DefenseEvent;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AGameEvent* ActiveDefenceEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DefendState)
    EDefendPointState DefendState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USingleUsableComponent* DefendPointUsable;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetState(EDefendPointState State);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DefendState();
    
    UFUNCTION(BlueprintCallable)
    void OnDefensePointActivated(APlayerCharacter* Player, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefenseStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefenseFail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DefenseComplete();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADefensePointActor();
};

