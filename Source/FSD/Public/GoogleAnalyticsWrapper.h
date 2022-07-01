#pragma once
#include "CoreMinimal.h"
#include "EFSDGoogleAnalyticsProperties.h"
#include "UObject/Object.h"
#include "PartyAnalyticsInformation.h"
#include "DeepDiveAnalyticsInformation.h"
#include "GoogleAnalyticsWrapper.generated.h"

class AFSDGameState;
class USeasonChallenge;
class APlayerController;
class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable)
class UGoogleAnalyticsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastUnlockedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastKnownClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BoscoLoadOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WasCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastCampaignName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastCampaignProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WasLastCampaignMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastCampaignSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastWeaponsLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastUpgradesLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SchematicInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPartyAnalyticsInformation PartyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeepDiveAnalyticsInformation DeepDiveInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordCommunityTrackingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommunityGoalsTrackingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldUpdateSchematicTrackingInformation;
    
public:
    UGoogleAnalyticsWrapper();
    UFUNCTION(BlueprintCallable)
    void StartMissionPartyInfo(AFSDGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUpdateSchematicInformation();
    
    UFUNCTION(BlueprintCallable)
    void ResetBoscoLoadout();
    
    UFUNCTION(BlueprintCallable)
    void RecordTotalTimeHit(const FString& Key, const FString& Campaign, bool Rank, int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void RecordOpenScreen(const FString& Key, bool Rank);
    
    UFUNCTION(BlueprintCallable)
    void RecordMachineEventEnd(const FString& EventName, bool WasCompleted, float completionTime);
    
    UFUNCTION(BlueprintCallable)
    void RecordKickPlayer(const FString& reason, APlayerController* KickedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void RecordGAUserTiming(const FString& TimingCategory, const int32 TimingValue, const FString& TimingName);
    
    UFUNCTION(BlueprintCallable)
    void RecordGaTreeOfVanityClaim(int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    void RecordGASeasonLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void RecordGAMissionTotalTimeHit(const FString& Key, const FString& Campaign, bool Rank, int32 totalTime, int32 Progress, int32 XP, int32 Credits);
    
    UFUNCTION(BlueprintCallable)
    void RecordGAMissionTimeEvent(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void RecordGAEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, EFSDGoogleAnalyticsProperties Property);
    
    UFUNCTION(BlueprintCallable)
    void RecordGADeepDiveStageHit(const FString& Key, bool Rank, int32 stageTime, int32 timeSinceStartOfDive, int32 totalTime, int32 nitraLeft);
    
    UFUNCTION(BlueprintCallable)
    void RecordGaChallengeReroll(int32 challengeIndex, USeasonChallenge* challenge);
    
    UFUNCTION(BlueprintCallable)
    void RecordExtraFailInfo(const FString& MissionName, const FString& Stage, const FString& ExtraText);
    
    UFUNCTION(BlueprintCallable)
    void RecordCustomGAEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, const FString& TrackingId);
    
    UFUNCTION(BlueprintCallable)
    void RecordContinuousDamage(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void RecordBossFightEnd(const FString& BossName, bool WasBossKilled, int32 BossKills);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ProcessCampaignName(UClass* Campaign);
    
    UFUNCTION(BlueprintCallable)
    void PlayerLatejoin();
    
    UFUNCTION(BlueprintCallable)
    void PlayerDropout();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeaveBind(AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinBind(AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsFText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void EndMissionPartyInfo();
    
};

