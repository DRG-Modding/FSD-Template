#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SeasonMissionResult.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SeasonLevel.h"
#include "ChallengeInfo.h"
#include "UObject/NoExportTypes.h"
#include "EPickaxePartLocation.h"
#include "SeasonsSubsystem.generated.h"

class UMissionStat;
class UObject;
class UDataAsset;
class UItemSkin;
class AFSDPlayerState;
class UVanityItem;
class USeasonChallenge;
class UTextureRenderTarget2D;
class UPlayerCharacterID;
class UPickaxePart;
class USeasonEventData;
class AFSDPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSeasonsSubsystemOnTokensChanged, int32, NumberOfTokens, int32, Change);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonsSubsystemOnXPChanged);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonsSubsystemOnVanityTreeReset);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonsSubsystemOnScripChallengeUpdated);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeasonsSubsystemOnClaimStatusChanged, bool, AllClaimed);

UCLASS(BlueprintType)
class USeasonsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnXPChanged OnXPChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnTokensChanged OnTokensChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnVanityTreeReset OnVanityTreeReset;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnScripChallengeUpdated OnScripChallengeUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnClaimStatusChanged OnClaimStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 ForceSeasonEventIndex;
    
    UPROPERTY(Transient)
    FSeasonMissionResult TempSeasonMissionResult;
    
    UPROPERTY(Transient)
    FSeasonMissionResult LatestMissionSeasonResult;
    
public:
    UFUNCTION(BlueprintCallable)
    FTimespan TimeToNewChallenge();
    
    UFUNCTION(BlueprintCallable)
    void RerollChallenge(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStatChanged(UMissionStat* Stat, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnScripChallengeCompleted(UMissionStat* Stat, float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsRewardClaimed(int32 Level, bool& isNormalClaimed, bool& isSpecialClaimed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeUnlocked(int32 TreeOfVanityNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeBought(int32 TreeOfVanityNodeID);
    
    UFUNCTION(BlueprintCallable)
    void InitliazeStats();
    
    UFUNCTION(BlueprintCallable)
    bool HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClaimedAllRewards();
    
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
    void GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& levelXPTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& levelXPTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSeasonBought(bool& isBought);
    
    UFUNCTION(BlueprintCallable)
    void GetScriptChallengeInfo(int32& Completed, int32& claimed, int32& Total);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTokens(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSeasonLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeasonLevel GetNextReward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelXP(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeasonLevel GetLevelReward(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLevelProgress(int32 Level, float& levelPercent, int32& levelXP, int32& levelXPTotal);
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataAsset*> GetAssetReferences(int32 challengeIndex, USeasonChallenge*& outChallenge);
    
    UFUNCTION(BlueprintCallable)
    TArray<FChallengeInfo> GetActiveChallenges(bool canGenerateNewChallenge);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GenerateVanityRewardIcon(UVanityItem* Item, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GenerateSkinRewardIcon(UItemSkin* Skin, UPlayerCharacterID* Character, bool bShowCloseUp, FTransform Offset, bool rebuildMesh, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GeneratePickaxeRewardIcon(UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void CompleteSeasonEvent_Server(USeasonEventData* inEvent);
    
    UFUNCTION(BlueprintCallable)
    bool ClaimScripChallenge();
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    bool BuyTreeNode(UObject* WorldContextObject, AFSDPlayerController* Player, int32 TreeOfVanityNodeID);
    
    USeasonsSubsystem();
};

