#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ECampaignType.h"
#include "CampaignManager.generated.h"

class AFSDPlayerController;
class UFSDSaveGame;
class UCampaign;
class UGeneratedMission;
class UDifficultySetting;

UCLASS(Abstract, BlueprintType)
class FSD_API UCampaignManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignCompletedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCampaignCompletedDelegate OnCampaignCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCampaignChangedDelegate OnCampaignChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> MainCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> WeeklyCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> MatrixCoreHuntCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> SideCampaigns;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> EventCampaigns;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UCampaign* ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedRequests;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool WeeklyBackendDataValid;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 WeeklyBackendSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDateTime WeeklyBackendExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestTime;
    
public:
    UCampaignManager();
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
    
};

