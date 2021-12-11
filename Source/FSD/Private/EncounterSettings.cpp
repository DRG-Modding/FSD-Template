#include "EncounterSettings.h"

UEncounterSettings::UEncounterSettings() {
    this->RequiredDifficultyPerDiversity = 40.00f;
    this->GlobalDifficultyScale = 1.00f;
    this->SmallRoomDifficultyModifier = 1.00f;
    this->MediumRoomDifficultyModifier = 2.00f;
    this->LargeRoomDifficultyModifier = 3.00f;
    this->TestMutator = NULL;
}

