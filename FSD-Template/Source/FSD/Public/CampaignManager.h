#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ECampaignType.h"
#include "CampaignManager.generated.h"

class UGeneratedMission;
class UFSDSaveGame;
class UCampaign;
class AFSDPlayerController;
class UDifficultySetting;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignManagerOnCampaignCompleted);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignManagerOnCampaignChanged);

UCLASS(Abstract, BlueprintType)
class UCampaignManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCampaignManagerOnCampaignCompleted OnCampaignCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FCampaignManagerOnCampaignChanged OnCampaignChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCampaign> MainCampaign;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> WeeklyCampaigns;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> MatrixCoreHuntCampaigns;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> SideCampaigns;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UCampaign>> EventCampaigns;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCampaign* ActiveCampaign;
    
    UPROPERTY(Transient)
    int32 NumFailedRequests;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool WeeklyBackendDataValid;
    
    UPROPERTY(Transient)
    int32 WeeklyBackendSeed;
    
    UPROPERTY(Transient)
    FDateTime WeeklyBackendExpirationTime;
    
    UPROPERTY(Transient)
    FDateTime LastRequestTime;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartNewCampaign(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void SkipMainCampaign(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEventsRefreshed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeeklyCampaignCompleted(UObject* WorldContext, ECampaignType campaigntype) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCampaignMission(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampaignRestrictionsMet(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* optionalDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampaignMission(UObject* WorldContextObject, UGeneratedMission* mission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCampaign(UCampaign* Campaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UCampaign>> GetUncompletedCampaigns(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetCampaingMissionFromSeeds(UObject* WorldContextObject, int32 GlobalSeed, int32 MissionSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetCampaingMission(const TArray<UGeneratedMission*>& missions, int32 MissionSeed) const;
    
    UFUNCTION(BlueprintCallable)
    void AbortActiveCampaign(UFSDSaveGame* SaveGame);
    
    UCampaignManager();
};

