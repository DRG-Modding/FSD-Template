#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "DSTelemetryWrapper.generated.h"

class AActor;
class AFSDPlayerController;
class APlayerCharacter;
class APlayerController;
class UDSTelemetry;
class UGeneratedMission;
class USeasonChallenge;

UCLASS(Blueprintable)
class UDSTelemetryWrapper : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDSTelemetry* Telemetry;
    
public:
    UDSTelemetryWrapper();
    UFUNCTION(BlueprintCallable)
    void RecordTreeOfVanityClaim(int32 NodeID);
    
    UFUNCTION(BlueprintCallable)
    void RecordSpecialEventHappening(const FString& EventName, bool SuccessfullySpawned);
    
    UFUNCTION(BlueprintCallable)
    void RecordSeasonXpGained(int32 Gained, int32 LastLevel, bool Positive);
    
    UFUNCTION(BlueprintCallable)
    void RecordSeasonLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void RecordSeasonChallengeReroll(int32 ChallengeIndex, USeasonChallenge* Challenge);
    
    UFUNCTION(BlueprintCallable)
    void RecordOpenScreen(const FString& ScreenName, bool RecordRank);
    
    UFUNCTION(BlueprintCallable)
    void RecordMissionStart();
    
    UFUNCTION(BlueprintCallable)
    void RecordMissionEnd(int32 XPReward, int32 CreditReward);
    
    UFUNCTION(BlueprintCallable)
    void RecordMachineEventEnd(const FString& EventName, bool WasCompleted, int32 completionTime);
    
    UFUNCTION(BlueprintCallable)
    void RecordKickPlayer(const FString& reason, APlayerController* KickedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void RecordDeepDiveStageEnd(const FString& MissionName, int32 StageTime, int32 TimeSinceStartOfDive, int32 TotalTime, int32 NitraLeft);
    
    UFUNCTION(BlueprintCallable)
    void RecordContinuousDamage(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void RecordCommunityEvents(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue);
    
    UFUNCTION(BlueprintCallable)
    void RecordBossFightEnd(const FString& BossName, bool WasBossKilled, int32 NumBossKills);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewProceduralSetup();
    
    UFUNCTION(BlueprintCallable)
    void OnNewPlayer(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnNewMission(UGeneratedMission* mission);
    
    UFUNCTION(BlueprintCallable)
    void OnNewCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterSaveChanged(TSubclassOf<APlayerCharacter> CharacterClass, int32 Level, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterPromoted(TSubclassOf<APlayerCharacter> CharacterClass, int32 RetirementCount);
    
};

