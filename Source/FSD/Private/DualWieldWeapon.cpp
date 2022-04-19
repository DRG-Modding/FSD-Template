#include "DualWieldWeapon.h"
#include "FirstPersonSkeletalMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"

ADualWieldWeapon::ADualWieldWeapon() {
    this->FPMeshLeft = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPMeshLeft"));
    this->TPMeshLeft = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPMeshLeft"));
    this->WPN_Left_Reload = NULL;
    this->WPN_Left_TP_Reload = NULL;
    this->CasingParticlesLeft = NULL;
}

