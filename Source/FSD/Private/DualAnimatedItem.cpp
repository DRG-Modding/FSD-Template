#include "DualAnimatedItem.h"
#include "Components/SkeletalMeshComponent.h"
#include "FirstPersonSkeletalMeshComponent.h"

USkeletalMeshComponent* ADualAnimatedItem::GetRItemMesh() const {
    return NULL;
}

USkeletalMeshComponent* ADualAnimatedItem::GetLItemMesh() const {
    return NULL;
}

ADualAnimatedItem::ADualAnimatedItem() {
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->FPRMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPRMesh"));
    this->FPLMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPLMesh"));
    this->TPRMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPRMesh"));
    this->TPLMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TPLMesh"));
    this->FP_EquipAnimation = NULL;
    this->TP_EquipAnimation = NULL;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
}

