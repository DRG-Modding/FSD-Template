#include "AnimatedItem.h"

class USkeletalMeshComponent;


FTransform AAnimatedItem::GetMuzzle() const {
    return FTransform{};
}

USkeletalMeshComponent* AAnimatedItem::GetItemMesh() const {
    return NULL;
}

AAnimatedItem::AAnimatedItem() {
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->FP_EquipAnimation = NULL;
    this->TP_EquipAnimation = NULL;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
}

