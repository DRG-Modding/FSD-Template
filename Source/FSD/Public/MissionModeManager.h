#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MissionModeManager.generated.h"

class UGeneratedMission;
class UObject;
class UUserWidget;
class UWidget;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UMissionModeManager : public UInterface {
    GENERATED_BODY()
};

class IMissionModeManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void StartDive() PURE_VIRTUAL(StartDive,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ReInitialize() PURE_VIRTUAL(ReInitialize,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool IsLastStage() const PURE_VIRTUAL(IsLastStage, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsActive() const PURE_VIRTUAL(IsActive, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetStage() const PURE_VIRTUAL(GetStage, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetPerObjectiveXP(int32& perPrimary, int32& perSecondary) const PURE_VIRTUAL(GetPerObjectiveXP,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumberOfStages() const PURE_VIRTUAL(GetNumberOfStages, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftClassPtr<UWidget> GetMissionModeCheatUI() PURE_VIRTUAL(GetMissionModeCheatUI, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftClassPtr<UUserWidget> GetMissionCompleteScreen(bool missionSuccessful) const PURE_VIRTUAL(GetMissionCompleteScreen, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftClassPtr<UUserWidget> GetMissionBarWidget() const PURE_VIRTUAL(GetMissionBarWidget, return NULL;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    virtual float GetHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission) const PURE_VIRTUAL(GetHazardBonus, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual UGeneratedMission* GetActiveMission() const PURE_VIRTUAL(GetActiveMission, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetActiveDiveName() const PURE_VIRTUAL(GetActiveDiveName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual bool CompleteCurrentSingleMission() PURE_VIRTUAL(CompleteCurrentSingleMission, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AreAllSelectedClassesQualified() const PURE_VIRTUAL(AreAllSelectedClassesQualified, return false;);
    
};

