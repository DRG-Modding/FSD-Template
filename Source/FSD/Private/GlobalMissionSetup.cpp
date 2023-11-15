#include "GlobalMissionSetup.h"

UGlobalMissionSetup::UGlobalMissionSetup() {
    this->FacilityMutatorChance = 0.25f;
    this->MissionNames = NULL;
    this->DoubleWarningChance = 0.50f;
}

TArray<FMissionTemplateItem> UGlobalMissionSetup::GetAllPossibleMissions() const {
    return TArray<FMissionTemplateItem>();
}


