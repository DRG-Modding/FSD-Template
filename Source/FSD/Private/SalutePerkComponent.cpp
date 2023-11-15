#include "SalutePerkComponent.h"

USalutePerkComponent::USalutePerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoolDown = 60.00f;
    this->FleeRadius = 400.00f;
}

void USalutePerkComponent::OnSalute() {
}


