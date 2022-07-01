#include "CampaignManager.h"
#include "Templates/SubclassOf.h"

class UCampaign;
class UDifficultySetting;
class UFSDSaveGame;
class UObject;
class AFSDPlayerController;
class UGeneratedMission;

void UCampaignManager::StartNewCampaign(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame) {
}

void UCampaignManager::SkipMainCampaign(UObject* WorldContextObject) {
}

void UCampaignManager::OnEventsRefreshed() {
}

bool UCampaignManager::IsWeeklyCampaignCompleted(UObject* WorldContext, ECampaignType campaigntype) const {
    return false;
}

bool UCampaignManager::IsInCampaignMission(AFSDPlayerController* Player) const {
    return false;
}

bool UCampaignManager::IsCampaignRestrictionsMet(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* optionalDifficulty) const {
    return false;
}

bool UCampaignManager::IsCampaignMission(UObject* WorldContextObject, UGeneratedMission* mission) const {
    return false;
}

bool UCampaignManager::IsActiveCampaign(UCampaign* Campaign) const {
    return false;
}

TArray<TSubclassOf<UCampaign>> UCampaignManager::GetUncompletedCampaigns(AFSDPlayerController* Player) const {
    return TArray<TSubclassOf<UCampaign>>();
}

UGeneratedMission* UCampaignManager::GetCampaingMissionFromSeeds(UObject* WorldContextObject, int32 GlobalSeed, int32 MissionSeed) const {
    return NULL;
}

UGeneratedMission* UCampaignManager::GetCampaingMission(const TArray<UGeneratedMission*>& missions, int32 MissionSeed) const {
    return NULL;
}

void UCampaignManager::AbortActiveCampaign(UFSDSaveGame* SaveGame) {
}

UCampaignManager::UCampaignManager() {
    this->MainCampaign = NULL;
    this->ActiveCampaign = NULL;
    this->NumFailedRequests = 0;
    this->WeeklyBackendDataValid = false;
    this->WeeklyBackendSeed = -1;
}

