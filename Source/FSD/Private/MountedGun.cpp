#include "MountedGun.h"

void AMountedGun::Server_Test_Implementation() {
}
bool AMountedGun::Server_Test_Validate() {
    return true;
}

AMountedGun::AMountedGun() {
    this->WeaponFire = NULL;
    this->GunLogic = NULL;
}

