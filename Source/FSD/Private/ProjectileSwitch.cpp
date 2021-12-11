#include "ProjectileSwitch.h"

FProjectileSwitch::FProjectileSwitch() {
    this->projectileClass = NULL;
    this->CriteriaType = EProjectileSwitchCriteria::None;
    this->CriteriaThreshhold = 0.00f;
}

