#include "EyeForEyePerkComponent.h"

class UDamageClass;
class AActor;

void UEyeForEyePerkComponent::OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost) {
}

UEyeForEyePerkComponent::UEyeForEyePerkComponent() {
    this->CoolDown = 0.00f;
    this->LoadedSTE = NULL;
}

