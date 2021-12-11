#include "CharacterSave.h"

FCharacterSave::FCharacterSave() {
    this->XP = 0;
    this->HasCompletedRetirementCampaign = false;
    this->TimesRetired = 0;
    this->RetiredCharacterLevels = 0;
    this->HasSeenRetirementRewardScreen = false;
    this->CharacterClass = NULL;
    this->SelectedLoadout = 0;
}

