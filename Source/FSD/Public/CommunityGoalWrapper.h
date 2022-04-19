#pragma once
#include "CoreMinimal.h"
#include "UICheckDelegateDelegate.h"
#include "UObject/Object.h"
#include "CommunityRewardNotification.h"
#include "CommunityGoalStateData.h"
#include "OnFreeBeersChangedDelegateDelegate.h"
#include "CommunityFactionData.h"
#include "FactionsDataDelegateDelegate.h"
#include "GoalStateDelegateDelegate.h"
#include "CommunityGoalWrapper.generated.h"

class UCommunityGoal;
class UCommunityGoalFaction;

UCLASS(BlueprintType)
class UCommunityGoalWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasCGS;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FCommunityGoalStateData CGSData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LastCollectedRewardID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FCommunityFactionData FactionData;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool FreeBeerRewardActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnFreeBeersChangedDelegate OnFreeBeerRewardChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString SteamBranch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFactionsDataDelegate OnFactionsDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGoalStateDelegate OnDiscordCGSDataEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUICheckDelegate UICheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUICheckDelegate OnGoalsInitializedDelegate;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool AreAllGoalsInitialized;
    
public:
    UCommunityGoalWrapper();
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
    
};

