#include "DualAnimatedItem.h"

class USkeletalMeshComponent;

USkeletalMeshComponent* ADualAnimatedItem::GetRItemMesh() const {
    return NULL;
}

USkeletalMeshComponent* ADualAnimatedItem::GetLItemMesh() const {
    return NULL;
}

ADualAnimatedItem::ADualAnimatedItem() {
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->FP_EquipAnimation = NULL;
    this->TP_EquipAnimation = NULL;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
}

