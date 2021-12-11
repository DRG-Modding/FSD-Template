#include "HitscanComponent.h"

class UFSDPhysicalMaterial;
class UPrimitiveComponent;

void UHitscanComponent::Server_RegisterRicochetHit_Terrain_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial) {
}
bool UHitscanComponent::Server_RegisterRicochetHit_Terrain_Validate(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial) {
    return true;
}

void UHitscanComponent::Server_RegisterRicochetHit_Destructable_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}
bool UHitscanComponent::Server_RegisterRicochetHit_Destructable_Validate(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
    return true;
}

void UHitscanComponent::Server_RegisterRicochetHit_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial) {
}
bool UHitscanComponent::Server_RegisterRicochetHit_Validate(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial) {
    return true;
}

void UHitscanComponent::Server_RegisterHit_Terrain_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial) {
}
bool UHitscanComponent::Server_RegisterHit_Terrain_Validate(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial) {
    return true;
}

void UHitscanComponent::Server_RegisterHit_Destructable_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}
bool UHitscanComponent::Server_RegisterHit_Destructable_Validate(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
    return true;
}

void UHitscanComponent::Server_RegisterHit_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial) {
}
bool UHitscanComponent::Server_RegisterHit_Validate(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial) {
    return true;
}

void UHitscanComponent::All_ShowRicochetHit_Terrain_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::All_ShowRicochetHit_Destructable_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void UHitscanComponent::All_ShowRicochetHit_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::All_ShowHit_Terrain_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial) {
}

void UHitscanComponent::All_ShowHit_Destructable_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void UHitscanComponent::All_ShowHit_Implementation(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial) {
}

UHitscanComponent::UHitscanComponent() {
    this->BulletsCanCarve = false;
    this->CarveDiameter = 50.00f;
    this->CarveNoise = 25.00f;
    this->CarveDebrisSize = 0.25f;
    this->GeneralImpactAudioVolume = 1.00f;
    this->ImpactDelay = 0.02f;
    this->OnlyUseImpactEffects = false;
    this->ImpactParticles = NULL;
    this->ImpactSound = NULL;
    this->IgnoreAlwaysPenetrate = false;
}

