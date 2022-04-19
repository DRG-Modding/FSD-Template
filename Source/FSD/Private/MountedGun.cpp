#include "MountedGun.h"
#include "Components/SkeletalMeshComponent.h"

void AMountedGun::Server_Test_Implementation() {
}
bool AMountedGun::Server_Test_Validate() {
    return true;
}

AMountedGun::AMountedGun() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->WeaponFire = NULL;
    this->GunLogic = NULL;
}

