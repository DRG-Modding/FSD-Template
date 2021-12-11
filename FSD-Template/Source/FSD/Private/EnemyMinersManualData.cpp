#include "EnemyMinersManualData.h"

class UTexture2D;

UTexture2D* UEnemyMinersManualData::GetEnemyIcon() const {
    return NULL;
}

UEnemyMinersManualData::UEnemyMinersManualData() {
    this->EnemyID = NULL;
    this->Family = EEnemyFamily::Glyphid;
    this->EnemyType = EEnemyType::Ground;
    this->ArmorType = EArmorType::Light;
    this->AlwaysUnlocked = false;
    this->InfoUnlockSpeed = 2;
}

