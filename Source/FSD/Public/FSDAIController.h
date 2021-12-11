#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AIController.h"
#include "FSDAIController.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDAIControllerOnMessageBehaviorTreeEvent, FName, Message);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDAIControllerOnAlertedEvent);

UCLASS()
class AFSDAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDAIControllerOnMessageBehaviorTreeEvent OnMessageBehaviorTreeEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDAIControllerOnAlertedEvent OnAlertedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> LOSTraceChannel;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerCharacter> TargetedPlayer;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlerted(bool isAlerted);
    
    UFUNCTION(BlueprintCallable)
    void ResumeLogic();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBlackboardChanges(const FName& Key);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackingChanged(bool attacking);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsAlerted() const;
    
    AFSDAIController();
};

