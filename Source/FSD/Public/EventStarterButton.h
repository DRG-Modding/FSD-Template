#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BootUpDelegateDelegate.h"
#include "EInputKeys.h"
#include "EventStarterButton.generated.h"

class USceneComponent;
class APlayerCharacter;
class USingleUsableComponent;

UCLASS(Blueprintable)
class AEventStarterButton : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBootUpDelegate OnBootupEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Booted, meta=(AllowPrivateAccess=true))
    bool Booted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OpenForUse, meta=(AllowPrivateAccess=true))
    bool IsOpenForUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsEventActive;
    
public:
    AEventStarterButton();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BootUpEvent();
    
};

