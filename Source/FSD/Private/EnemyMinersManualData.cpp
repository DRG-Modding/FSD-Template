#include "EnemyMinersManualData.h"

UEnemyMinersManualData::UEnemyMinersManualData() {
    this->EnemyID = NULL;
    this->Family = EEnemyFamily::Glyphid;
    this->EnemyType = EEnemyType::Ground;
    this->ArmorType = EArmorType::Light;
    this->AlwaysUnlocked = false;
    this->InfoUnlockSpeed = 2;
}

UTexture2D* UEnemyMinersManualData::GetEnemyIcon() const {
    return NULL;
}


