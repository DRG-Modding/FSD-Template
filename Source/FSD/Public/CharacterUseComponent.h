#pragma once
#include "CoreMinimal.h"
#include "CharacterUseState.h"
#include "Components/ActorComponent.h"
#include "EndUsingDelegateDelegate.h"
#include "BeginUsingDelegateDelegate.h"
#include "DepositingEventDelegate.h"
#include "ECustomUsableType.h"
#include "CharacterUseComponent.generated.h"

class UUsableComponentBase;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCharacterUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBeginUsingDelegate OnBeginHoveringEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEndUsingDelegate OnEndHoveringEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBeginUsingDelegate OnBeginUsingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEndUsingDelegate OnEndUsingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDepositingEvent OnDepositingBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDepositingEvent OnDepositingEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseDistance;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FCharacterUseState State;
    
public:
    UCharacterUseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(const FCharacterUseState& NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveCustomUsableComponent(UUsableComponentBase* Usable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FCharacterUseState& oldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtDepositable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDepositing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUsableComponentBase* GetHoveringUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUsableComponentBase* GetActiveUsable() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_UseEnded(const FCharacterUseState& oldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCustomUsableComponent(UUsableComponentBase* Usable, ECustomUsableType eType);
    
};

