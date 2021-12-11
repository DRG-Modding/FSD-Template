#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EventRewardDispenser.generated.h"

class AFSDPlayerState;
class AEventRewardFrame;
class APlayerCharacter;
class USchematic;

UCLASS()
class AEventRewardDispenser : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerId)
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AEventRewardFrame* DispenserFrame;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PoweredUp)
    bool PoweredUp;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsActivated)
    bool IsActivated;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SelectedReward)
    USchematic* SelectedReward;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedReward(USchematic* InReward);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PowerUp(APlayerCharacter* InPlayerCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedReward();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PoweredUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPoweredUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerAssigned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenDispenser();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwningPlayer(APlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetPlayer() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEventRewardDispenser();
};

