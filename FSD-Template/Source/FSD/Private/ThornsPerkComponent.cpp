#include "ThornsPerkComponent.h"

class UDamageClass;
class AActor;

void UThornsPerkComponent::OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost) {
}

UThornsPerkComponent::UThornsPerkComponent() {
    this->DamageClass = NULL;
    this->CoolDown = 0.00f;
    this->ThornsSTE = NULL;
}

