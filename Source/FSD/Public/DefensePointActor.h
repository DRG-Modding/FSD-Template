#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "EDefendPointState.h"
#include "DefensePointActor.generated.h"

class AGameEvent;
class APlayerCharacter;
class USingleUsableComponent;

UCLASS(Abstract, Blueprintable)
class ADefensePointActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameEvent> DefenseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameEvent* ActiveDefenceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DefendState, meta=(AllowPrivateAccess=true))
    EDefendPointState DefendState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* DefendPointUsable;
    
public:
    ADefensePointActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

