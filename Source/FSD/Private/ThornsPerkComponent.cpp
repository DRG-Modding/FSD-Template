#include "ThornsPerkComponent.h"

void UThornsPerkComponent::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}

UThornsPerkComponent::UThornsPerkComponent() {
    this->DamageClass = NULL;
    this->CoolDown = 0.00f;
    this->ThornsSTE = NULL;
}

