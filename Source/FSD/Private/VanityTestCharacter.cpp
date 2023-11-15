#include "VanityTestCharacter.h"

AVanityTestCharacter::AVanityTestCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmorThickness = 0.00f;
    this->BeardThickness = 0.00f;
    this->ArmorCoversBeard = false;
    this->WeaponMesh = NULL;
}

void AVanityTestCharacter::SetupVanity() {
}


