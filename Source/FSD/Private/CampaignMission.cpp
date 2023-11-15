#include "CampaignMission.h"

UCampaignMission::UCampaignMission() {
    this->PlanetZone = NULL;
    this->MissionCompleteShout = NULL;
    this->OverrideMutators = false;
    this->MutatorOverride = ECampaignMutators::NotAllowed;
}

UMissionTemplate* UCampaignMission::GetMissionTemplate() const {
    return NULL;
}


