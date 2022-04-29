#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CaretakerActionComponent.generated.h"

class ACaretaker;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCaretakerActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartTickOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsUsing, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
public:
    UCaretakerActionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

