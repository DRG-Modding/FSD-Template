#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommunityGoalStateData.h"
#include "CommunityFactionData.h"
#include "CommunityRewardNotification.h"
#include "CommunityGoalWrapper.generated.h"

class UCommunityGoalFaction;
class UCommunityGoal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommunityGoalWrapperOnFreeBeerRewardChanged, bool, IsBeersFree);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCommunityGoalWrapperOnFactionsDataReceived, const TArray<FString>&, Goals, const TArray<float>&, Values, const TArray<int32>&, Members);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommunityGoalWrapperOnDiscordCGSDataEvent, bool, stateReceived);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCommunityGoalWrapperUICheck);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCommunityGoalWrapperOnGoalsInitializedDelegate);

UCLASS(BlueprintType)
class UCommunityGoalWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool HasCGS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FCommunityGoalStateData CGSData;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LastCollectedRewardID;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FCommunityFactionData FactionData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool FreeBeerRewardActive;
    
    UPROPERTY(BlueprintAssignable)
    FCommunityGoalWrapperOnFreeBeerRewardChanged OnFreeBeerRewardChanged;
    
    UPROPERTY(Transient)
    FString SteamTicket;
    
    UPROPERTY(Transient)
    FString SteamBranch;
    
    UPROPERTY(BlueprintAssignable)
    FCommunityGoalWrapperOnFactionsDataReceived OnFactionsDataReceived;
    
    UPROPERTY(BlueprintAssignable)
    FCommunityGoalWrapperOnDiscordCGSDataEvent OnDiscordCGSDataEvent;
    
    UPROPERTY(BlueprintAssignable)
    FCommunityGoalWrapperUICheck UICheck;
    
    UPROPERTY(BlueprintAssignable)
    FCommunityGoalWrapperOnGoalsInitializedDelegate OnGoalsInitializedDelegate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool AreAllGoalsInitialized;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAllGoalsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RewardReceived() const;
    
    UFUNCTION(BlueprintCallable)
    void RequestGoalStateData();
    
    UFUNCTION(BlueprintCallable)
    void RequestFactionsData();
    
    UFUNCTION(BlueprintCallable)
    void NextPeriod();
    
    UFUNCTION(BlueprintCallable)
    void InitializeGoalTierTargetValues(UCommunityGoal* goalToInitialize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoalFaction* GetPlayerCurrentFaction(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void ClaimRewardMessage(UObject* WorldContext, FCommunityRewardNotification rewardNotification);
    
    UFUNCTION(BlueprintCallable)
    void ClaimReward();
    
    UFUNCTION(BlueprintCallable)
    void CheckUI();
    
    UCommunityGoalWrapper();
};

