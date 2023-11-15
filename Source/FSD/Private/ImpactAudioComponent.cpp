#include "ImpactAudioComponent.h"
#include "Templates/SubclassOf.h"

UImpactAudioComponent::UImpactAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioParameterSpeed = TEXT("Impact_Speed");
    this->DecelerationThreshold = 40.00f;
    this->ListenForDeath = true;
}

void UImpactAudioComponent::OnOwnerDeath(UHealthComponentBase* HealthComponent) {
}

UImpactAudioComponent* UImpactAudioComponent::AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, TSubclassOf<UImpactAudioComponent> ComponentClass) {
    return NULL;
}


