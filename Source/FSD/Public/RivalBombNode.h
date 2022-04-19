#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ERivalBombNodeState.h"
#include "RivalBombNode.generated.h"

class ASplineCableActor;
class ARivalBombNode;
class ARivalBomb;
class UHackingUsableComponent;
class APlayerCharacter;

UCLASS()
class ARivalBombNode : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangedDelegate, ARivalBombNode*, InBombNode, ERivalBombNodeState, InState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStateChangedDelegate OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASplineCableActor> RivalBombCable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHackingUsableComponent* HackingUsable;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ERivalBombNodeState State;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ASplineCableActor* BombCable;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    ARivalBomb* RivalBomb;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_RemainingHackTime, meta=(AllowPrivateAccess=true))
    float RemainingHackTime;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    float HackStartTime;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    int32 BombIndex;
    
public:
    ARivalBombNode();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingHackTime() const;
    
    UFUNCTION(BlueprintCallable)
    void OnNodeHackedByUser(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnHackTimerTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingTimePct() const;
    
};

