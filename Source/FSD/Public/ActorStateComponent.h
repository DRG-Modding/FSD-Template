#pragma once
#include "CoreMinimal.h"
#include "StateTickDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "StateDelegateDelegate.h"
#include "ActorStateComponent.generated.h"

class UActorStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActorStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateDelegate OnBeginState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTickDelegate OnTickState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateDelegate OnEndState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    UActorStateComponent* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UActorStateComponent* NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UActorStateComponent* MasterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StateActiveTime;
    
public:
    UActorStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(UActorStateComponent* PreviousState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GotoState();
    
};

