#include "EyeForEyePerkComponent.h"

void UEyeForEyePerkComponent::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}

UEyeForEyePerkComponent::UEyeForEyePerkComponent() {
    this->CoolDown = 0.00f;
    this->LoadedSTE = NULL;
}

