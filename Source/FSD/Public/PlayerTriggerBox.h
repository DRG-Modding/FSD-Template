#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "PlayerTriggerBox.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTriggerBoxOnPlayerExited, APlayerCharacter*, Player);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTriggerBoxOnPlayerEntered, APlayerCharacter*, Player);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerTriggerBoxOnAllPlayersExited);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerTriggerBoxOnAllPlayersEntered);

UCLASS()
class APlayerTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnPlayerEntered OnPlayerEntered;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnPlayerExited OnPlayerExited;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnAllPlayersEntered OnAllPlayersEntered;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnAllPlayersExited OnAllPlayersExited;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APlayerCharacter*> PlayersInside;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerInside(bool excludingDeadPlayers) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerExited(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerEntered(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllPlayersExited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllPlayersEntered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersInside(bool excludingDeadPlayers) const;
    
    APlayerTriggerBox();
};

