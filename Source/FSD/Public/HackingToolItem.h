#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "HackingToolItem.generated.h"

class UHackingUsableComponent;

UCLASS(Abstract)
class FSD_API AHackingToolItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient, ReplicatedUsing=OnRep_HackingUsable)
    TWeakObjectPtr<UHackingUsableComponent> HackingUsable;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HackingCompleted(bool InHackingSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHackingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClick();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HackingUsable();
    
public:
    UFUNCTION(BlueprintCallable)
    void HackingCompleted(bool InHackingSuccessful);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AHackingToolItem();
};

