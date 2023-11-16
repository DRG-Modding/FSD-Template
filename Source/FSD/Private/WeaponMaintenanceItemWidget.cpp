#include "WeaponMaintenanceItemWidget.h"

UWeaponMaintenanceItemWidget::UWeaponMaintenanceItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WeaponID = NULL;
    this->characterID = NULL;
    this->Reward = NULL;
    this->WeaponData = NULL;
    this->MaintenanceState = EWeaponMaintenanceState::Maintaining;
    this->MaintenanceLevel = 0;
    this->MaintenanceXP = 0;
    this->MaintenanceTargetXP = 0;
}

void UWeaponMaintenanceItemWidget::SetWeapon(UObject* WorldContext, UItemID* InWeaponID, UPlayerCharacterID* InCharacterID) {
}

void UWeaponMaintenanceItemWidget::RefreshFromSavegame(UObject* WorldContext) {
}



bool UWeaponMaintenanceItemWidget::LevelUp(UObject* WorldContext) {
    return false;
}

int32 UWeaponMaintenanceItemWidget::GetMaxLevel() const {
    return 0;
}


