#include "CampaignMission.h"

class UMissionTemplate;

UMissionTemplate* UCampaignMission::GetMissionTemplate() const {
    return NULL;
}

UCampaignMission::UCampaignMission() {
    this->PlanetZone = NULL;
    this->MissionCompleteShout = NULL;
    this->OverrideMutators = false;
    this->MutatorOverride = ECampaignMutators::NotAllowed;
}

