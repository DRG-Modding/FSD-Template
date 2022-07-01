#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GoalStateDelegateDelegate.h"
#include "CommunityGoalStateData.h"
#include "UICheckDelegateDelegate.h"
#include "CommunityFactionData.h"
#include "OnFreeBeersChangedDelegateDelegate.h"
#include "CommunityRewardNotification.h"
#include "FactionsDataDelegateDelegate.h"
#include "CommunityGoalWrapper.generated.h"

class UCommunityGoalFaction;
class UCommunityGoal;

UCLASS(Blueprintable)
class UCommunityGoalWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCGS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCommunityGoalStateData CGSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCollectedRewardID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCommunityFactionData FactionData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FreeBeerRewardActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFreeBeersChangedDelegate OnFreeBeerRewardChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SteamBranch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionsDataDelegate OnFactionsDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoalStateDelegate OnDiscordCGSDataEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUICheckDelegate UICheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUICheckDelegate OnGoalsInitializedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

