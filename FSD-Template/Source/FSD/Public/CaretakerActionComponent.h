#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CaretakerActionComponent.generated.h"

class ACaretaker;

UCLASS(Abstract, Blueprintable)
class UCaretakerActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool StartTickOnUse;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsUsing)
    bool IsUsing;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UseAction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerAction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACaretaker* GetCaretaker() const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUse() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCaretakerActionComponent();
};

