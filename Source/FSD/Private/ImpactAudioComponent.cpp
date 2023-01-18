#include "ImpactAudioComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class UHealthComponentBase;
class UImpactAudioComponent;
class USceneComponent;

void UImpactAudioComponent::OnOwnerDeath(UHealthComponentBase* HealthComponent) {
}

UImpactAudioComponent* UImpactAudioComponent::AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, TSubclassOf<UImpactAudioComponent> ComponentClass) {
    return NULL;
}

UImpactAudioComponent::UImpactAudioComponent() {
    this->AudioParameterSpeed = TEXT("Impact_Speed");
    this->DecelerationThreshold = 40.00f;
    this->ListenForDeath = true;
}

