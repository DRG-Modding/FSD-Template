#include "GlobalMissionSetup.h"

TArray<FMissionTemplateItem> UGlobalMissionSetup::GetAllPossibleMissions() const {
    return TArray<FMissionTemplateItem>();
}

UGlobalMissionSetup::UGlobalMissionSetup() {
    this->FacilityMutatorChance = 0.25f;
    this->MissionNames = NULL;
    this->DoubleWarningChance = 0.50f;
}

