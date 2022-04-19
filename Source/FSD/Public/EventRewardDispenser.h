#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameFramework/Actor.h"
#include "EventRewardDispenser.generated.h"

class AFSDPlayerState;
class AEventRewardFrame;
class USchematic;
class APlayerCharacter;

UCLASS()
class AEventRewardDispenser : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PlayerId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AEventRewardFrame* DispenserFrame;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_PoweredUp, meta=(AllowPrivateAccess=true))
    bool PoweredUp;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsActivated, meta=(AllowPrivateAccess=true))
    bool IsActivated;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_SelectedReward, meta=(AllowPrivateAccess=true))
    USchematic* SelectedReward;
    
public:
    AEventRewardDispenser();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
};

