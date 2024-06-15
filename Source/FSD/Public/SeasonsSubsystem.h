#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ChallengeInfo.h"
#include "ClaimStatusChangedDelegate.h"
#include "OnScripChallengeUpdatedDelegate.h"
#include "OnTokensChangedSignatureDelegate.h"
#include "OnVanityTreeResetDelegate.h"
#include "OnXPChangedSignatureDelegate.h"
#include "SeasonLevel.h"
#include "SeasonMissionResult.h"
#include "SeasonsSubsystem.generated.h"

class AFSDPlayerController;
class AFSDPlayerState;
class UDataAsset;
class UGameDLC;
class UMissionStat;
class UObject;
class UReward;
class USeason;
class USeasonChallenge;
class USeasonEventData;
class USpecialEvent;

UCLASS(Blueprintable)
class USeasonsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXPChangedSignature OnXPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTokensChangedSignature OnTokensChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVanityTreeReset OnVanityTreeReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScripChallengeUpdated OnScripChallengeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimStatusChanged OnClaimStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USpecialEvent> forcedSeasonEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan NewChallengeTimeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DesiredSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeasonMissionResult TempSeasonMissionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeasonMissionResult LatestMissionSeasonResult;
    
public:
    USeasonsSubsystem();

    UFUNCTION(BlueprintCallable)
    FTimespan TimeToNewChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSeasonCompletedAnnounced(bool IsAnnounced) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveSeason(USeason* Season);
    
    UFUNCTION(BlueprintCallable)
    void RerollChallenge(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnStatChanged(UObject* WorldContext, UMissionStat* Stat, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnScripChallengeCompleted(UObject* WorldContext, UMissionStat* Stat, float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsRewardClaimed(int32 Level, bool& IsNormalClaimed, bool& IsSpecialClaimed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeUnlocked(int32 TreeOfVanityNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeBought(int32 TreeOfVanityNodeID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStatsAndChallenges();
    
    UFUNCTION(BlueprintCallable)
    bool HasUnclaimedRewards(int32& Level);
    
    UFUNCTION(BlueprintCallable)
    bool HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClaimedAllRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnusedHearts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReward* GetTreeOfVanityReward(UReward* currentReward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UGameDLC* GetStoreSeasonDLC(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonXPFromMissionXP(AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonXP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSeasonName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeasonMissionResult GetSeasonMissionResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal);
    
    UFUNCTION(BlueprintCallable)
    bool GetSeasonExpiryDate(FDateTime& ExpiryDate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSeasonCompletedAnnounced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSeasonBought(bool& isBought);
    
    UFUNCTION(BlueprintCallable)
    void GetScriptChallengeInfo(int32& Completed, int32& claimed, int32& Total);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetNumberOfTokens(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSeasonLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfClaimedPlagueHeartScrips();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeasonLevel GetNextReward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelXP(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeasonLevel GetLevelReward(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLevelProgress(int32 Level, float& levelPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USeason* GetCurrentSeason() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataAsset*> GetAssetReferences(int32 ChallengeIndex, USeasonChallenge*& outChallenge);
    
    UFUNCTION(BlueprintCallable)
    TArray<FChallengeInfo> GetActiveChallenges(bool canGenerateNewChallenge);
    
    UFUNCTION(BlueprintCallable)
    bool ConvertHeartsToScrip(int32& scripGained);
    
    UFUNCTION(BlueprintCallable)
    void CompleteSeasonEvent_Server(USeasonEventData* InEvent);
    
    UFUNCTION(BlueprintCallable)
    bool ClaimScripChallenge();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool ClaimReward(UObject* WorldContext, AFSDPlayerController* Player, int32 Level, bool isNormalReward);
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_SetSeasonMissionResult(int32 XPFromMission, int32 numberOfChallenges, USeasonEventData* Event);
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_ResetTimeToNewChallenge();
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_ResetReroll();
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_AddChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRerollChallenge();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool BuyTreeNode(UObject* WorldContextObject, AFSDPlayerController* Player, int32 TreeOfVanityNodeID);
    
};

