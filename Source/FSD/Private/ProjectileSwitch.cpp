#include "ProjectileSwitch.h"

FProjectileSwitch::FProjectileSwitch() {
    this->ProjectileClass = NULL;
    this->CriteriaType = EProjectileSwitchCriteria::None;
    this->CriteriaThreshhold = 0.00f;
}

