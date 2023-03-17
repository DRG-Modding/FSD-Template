#include "Campaign.h"
#include "Templates/SubclassOf.h"

bool UCampaign::IsComplete() const {
    return false;
}

bool UCampaign::IsCampaignComplete(UObject* WorldContext, TSubclassOf<UCampaign> Campaign) {
    return false;
}

UCampaign* UCampaign::GetReference(TSubclassOf<UCampaign> Campaign) {
    return NULL;
}

UCampaignMission* UCampaign::GetPreviousMission() const {
    return NULL;
}

UTexture2D* UCampaign::GetPicture() const {
    return NULL;
}

FText UCampaign::GetCampaignTitle(TSubclassOf<UCampaign> Campaign) {
    return FText::GetEmpty();
}

UCampaignMission* UCampaign::GetActiveMission() const {
    return NULL;
}

bool UCampaign::CanStartCampaign(AFSDPlayerController* Player) const {
    return false;
}

bool UCampaign::CanSeeCampaign(APlayerController* PlayerController) const {
    return false;
}

bool UCampaign::AreRestrictionsMet(AFSDPlayerController* Player, UDifficultySetting* optionalDifficulty) const {
    return false;
}

UCampaign::UCampaign() {
    this->HasMissions = true;
    this->CampaignCompleteShout = NULL;
    this->RequiredCharacterID = NULL;
    this->Progress = 0;
    this->Seed = 0;
    this->CanAbort = true;
    this->CanSkip = false;
    this->campaigntype = ECampaignType::Normal;
    this->CampaignCompletedMissionStat = NULL;
    this->CampaignActivity = NULL;
    this->ReplacesOldCampaignCampaign = NULL;
    this->Mutators = ECampaignMutators::NotAllowed;
}

