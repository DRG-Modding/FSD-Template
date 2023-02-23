#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "DeepDiveBank.h"
#include "DeepDiveTesterItem.h"
#include "MissionModeManager.h"
#include "DeepDiveManager.generated.h"

class UBiome;
class UDeepDive;
class UFSDEventsHandler;
class UGeneratedMission;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UDeepDiveManager : public UObject, public IMissionModeManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepDiveRefreshDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeepDiveRefreshDelegate OnDeepDivesRefresh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LockSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDEventsHandler* EventsHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeepDive* ActiveNormalDeepDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeepDive* ActiveHardDeepDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeepDive* ActiveDeepDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeepDive* DebugDeepDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGeneratedMission* CurrentMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float currentDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FDeepDiveBank> DeepDiveBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BackendDataValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime BackendExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BackendSeed;
    
public:
    UDeepDiveManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDeepDive(UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable)
    void ReInitialize();
    
    UFUNCTION(BlueprintCallable)
    void MarkGivenRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetCurrentSingleMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDeepDiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetActiveNormalDeepDive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetActiveHardDeepDive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetActiveDeepDive() const;
    
    UFUNCTION(BlueprintCallable)
    UDeepDive* GenerateDebugDeepDive(TArray<FDeepDiveTesterItem> stages, UBiome* Biome, bool IsElite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindDeepDiveSeed(UDeepDive* DeepDive) const;
    
    UFUNCTION(BlueprintCallable)
    bool CompleteCurrentSingleMission();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDive() override PURE_VIRTUAL(StartDive,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsLastStage() const override PURE_VIRTUAL(IsLastStage, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive() const override PURE_VIRTUAL(IsActive, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStage() const override PURE_VIRTUAL(GetStage, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void GetPerObjectiveXP(int32& perPrimary, int32& perSecondary) const override PURE_VIRTUAL(GetPerObjectiveXP,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfStages() const override PURE_VIRTUAL(GetNumberOfStages, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UWidget> GetMissionModeCheatUI() override PURE_VIRTUAL(GetMissionModeCheatUI, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UUserWidget> GetMissionCompleteScreen(bool missionSuccessful) const override PURE_VIRTUAL(GetMissionCompleteScreen, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UUserWidget> GetMissionBarWidget() const override PURE_VIRTUAL(GetMissionBarWidget, return NULL;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    float GetHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission) const override PURE_VIRTUAL(GetHazardBonus, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    UGeneratedMission* GetActiveMission() const override PURE_VIRTUAL(GetActiveMission, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetActiveDiveName() const override PURE_VIRTUAL(GetActiveDiveName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    bool AreAllSelectedClassesQualified() const override PURE_VIRTUAL(AreAllSelectedClassesQualified, return false;);
    
};

