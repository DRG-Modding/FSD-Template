#include "EyeForEyePerkComponent.h"

UEyeForEyePerkComponent::UEyeForEyePerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoolDown = 0.00f;
    this->LoadedSTE = NULL;
}

void UEyeForEyePerkComponent::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}


