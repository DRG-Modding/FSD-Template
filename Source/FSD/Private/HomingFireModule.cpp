#include "HomingFireModule.h"

AHomingFireModule::AHomingFireModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HomingProjectileClass = NULL;
    this->TimeBetweenShots = 0.00f;
}


