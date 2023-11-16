#include "LightStrobingComponent.h"

ULightStrobingComponent::ULightStrobingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhotosensitiveMultiplier = 0.50f;
    this->AutoSetup = true;
}

FLightStrobeChannel ULightStrobingComponent::GetChannel(int32 Index) {
    return FLightStrobeChannel{};
}

void ULightStrobingComponent::AddStrobeChannel(const FLightStrobeChannel& Channel) {
}

void ULightStrobingComponent::AddMesh(UMeshComponent* Mesh, int32 Channel) {
}

void ULightStrobingComponent::AddMaterial(UMaterialInstanceDynamic* Mid, int32 Channel) {
}

void ULightStrobingComponent::AddLight(UPointLightComponent* Light, int32 Channel) {
}


