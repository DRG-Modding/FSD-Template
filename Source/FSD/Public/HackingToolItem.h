#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "HackingToolItem.generated.h"

class UHackingUsableComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API AHackingToolItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_HackingUsable, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHackingUsableComponent> HackingUsable;
    
public:
    AHackingToolItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HackingCompleted(UHackingUsableComponent* InUsable, bool InHackingSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHackingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedActionReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedActionPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActionClick();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HackingUsable();
    
    UFUNCTION(BlueprintCallable)
    void HackingCompleted(bool InHackingSuccessful);
    
};

