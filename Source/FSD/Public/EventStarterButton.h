#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "EventStarterButton.generated.h"

class USceneComponent;
class USingleUsableComponent;
class AEventStarterButton;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventStarterButtonOnBootupEvent, AEventStarterButton*, pushedButton);

UCLASS()
class AEventStarterButton : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USingleUsableComponent* Usable;
    
    UPROPERTY()
    FEventStarterButtonOnBootupEvent OnBootupEvent;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Booted)
    bool Booted;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_OpenForUse)
    bool IsOpenForUse;
    
    UPROPERTY(Replicated, Transient)
    bool IsEventActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsEventActive(bool NewIsEventActive);
    
    UFUNCTION(BlueprintCallable)
    void OnUseProgress(float Progress);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OpenForUse();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Booted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenedForUse(bool wasOpened);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBooted();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseForUse(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void BootUpEvent();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEventStarterButton();
};

