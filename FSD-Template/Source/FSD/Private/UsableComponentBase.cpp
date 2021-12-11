#include "UsableComponentBase.h"

class APlayerCharacter;
class UTexture2D;

void UUsableComponentBase::SetRayTraceTriggered(bool rayTraceTriggered) {
}

FText UUsableComponentBase::GetUseText_Implementation(APlayerCharacter* User) {
    return FText::GetEmpty();
}

float UUsableComponentBase::GetUseProgressInPercent(APlayerCharacter* User) const {
    return 0.0f;
}

UTexture2D* UUsableComponentBase::GetUsableIcon() const {
    return NULL;
}

bool UUsableComponentBase::GetShowUsingUI() const {
    return false;
}

bool UUsableComponentBase::GetIsRayTraceTriggerd() const {
    return false;
}

bool UUsableComponentBase::GetHideProgressBar(APlayerCharacter* User) const {
    return false;
}

bool UUsableComponentBase::GetHideActionText(APlayerCharacter* User) const {
    return false;
}

void UUsableComponentBase::EndUse(APlayerCharacter* User) {
}

void UUsableComponentBase::BeginUse(APlayerCharacter* User, EInputKeys Key) {
}

UUsableComponentBase::UUsableComponentBase() {
    this->CallbackKeys = 1;
    this->UseCooldown = 0.00f;
    this->MustBeGroundedToUse = true;
    this->CanUseStrict = false;
    this->StrictOnlyAfterPickup = false;
    this->AnimationSettings = NULL;
    this->Priority = 0;
    this->UseableByOwnerOnly = false;
    this->RestrictToCollider = NULL;
    this->UseRestrictionAllowance = EUseRestriction::Free;
    this->IsRayTraceTriggered = true;
    this->ResetUsingOnCompletion = true;
    this->EquipOnEndUse = false;
}

