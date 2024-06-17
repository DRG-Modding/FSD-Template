#include "IKComponent.h"

UIKComponent::UIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = false;
    this->BodyColi = NULL;
    this->EffectorWeight = 0.00f;
    this->EffectorsEnabled = false;
}


