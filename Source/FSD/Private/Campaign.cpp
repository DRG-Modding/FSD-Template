#include "Campaign.h"
#include "Templates/SubclassOf.h"

class UObject;
class UCampaignMission;
class UCampaign;
class UTexture2D;
class APlayerController;
class AFSDPlayerController;
class UDifficultySetting;

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
    this->RequiredCharacterID = NULL;
    this->Progress = 0;
    this->CanAbort = true;
    this->CanSkip = false;
    this->Icon = NULL;
    this->campaigntype = ECampaignType::Normal;
    this->CampaignCompletedMissionStat = NULL;
    this->CampaignActivity = NULL;
    this->Mutators = ECampaignMutators::NotAllowed;
}

