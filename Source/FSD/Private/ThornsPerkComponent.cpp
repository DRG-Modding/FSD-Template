#include "ThornsPerkComponent.h"

UThornsPerkComponent::UThornsPerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageClass = NULL;
    this->CoolDown = 0.00f;
    this->ThornsSTE = NULL;
}

void UThornsPerkComponent::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}


