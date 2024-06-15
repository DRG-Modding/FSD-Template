#include "LightStrobingComponent.h"

ULightStrobingComponent::ULightStrobingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhotosensitiveMultiplier = 0.50f;
    this->AutoSetup = true;
}

void ULightStrobingComponent::StopLoop(int32 Channel) {
}

void ULightStrobingComponent::AddMesh(UMeshComponent* Mesh) {
}

void ULightStrobingComponent::AddMaterial(UMaterialInstanceDynamic* Mid) {
}

void ULightStrobingComponent::AddLight(UPointLightComponent* Light) {
}


