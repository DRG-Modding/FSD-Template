#include "UsableComponentBase.h"

void UUsableComponentBase::SetUseRestrictions(UUseConditionSet* set) {
}

void UUsableComponentBase::SetRayTraceTriggered(bool rayTraceTriggered) {
}

void UUsableComponentBase::SetAnimationSettings(UUseAnimationSetting* Settings) {
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
    this->AnimationSettings = NULL;
    this->Priority = 0;
    this->RestrictToCollider = NULL;
    this->UsableHidesPlaceables = true;
    this->IsRayTraceTriggered = true;
    this->ResetUsingOnCompletion = true;
    this->IsClientPredictive = false;
    this->ThirdPersonWhileUsing = false;
}

