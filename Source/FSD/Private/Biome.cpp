#include "Biome.h"
#include "Templates/SubclassOf.h"

class UUserWidget;
class UObject;
class UTerrainMaterial;
class AActor;
class ADebrisDataActor;
class UMaterialInstance;
class UTexture2D;
class UParticleSystem;
class USoundCue;

void UBiome::StartPreload(UObject* WorldContext) const {
}

UTerrainMaterial* UBiome::GetRockMaterial() const {
    return NULL;
}

TSoftClassPtr<AActor> UBiome::GetPostProcessActorClass_Soft() const {
    return NULL;
}

UMaterialInstance* UBiome::GetFlavorMaterial() const {
    return NULL;
}

UTerrainMaterial* UBiome::GetDirtMaterial() const {
    return NULL;
}

TSoftClassPtr<ADebrisDataActor> UBiome::GetDebrisActorSoftClass() {
    return NULL;
}

UTexture2D* UBiome::GetBiomeWorldMap() const {
    return NULL;
}

UTexture2D* UBiome::GetBiomePicture() const {
    return NULL;
}

FText UBiome::GetBiomeName() const {
    return FText::GetEmpty();
}

UTexture2D* UBiome::GetBiomeMissionBar() const {
    return NULL;
}

TSubclassOf<UUserWidget> UBiome::GetBiomeMapWidget() const {
    return NULL;
}

TArray<FSoftObjectPath> UBiome::GetBiomeMapAssetList() const {
    return TArray<FSoftObjectPath>();
}

UTexture2D* UBiome::GetBiomeLargeImage() const {
    return NULL;
}

int32 UBiome::GetBiomeIndex() const {
    return 0;
}

UTexture2D* UBiome::GetBiomeIcon() const {
    return NULL;
}

FString UBiome::GetBiomeAnalyticsIndex() const {
    return TEXT("");
}

UParticleSystem* UBiome::GetAtmosphericParticles() const {
    return NULL;
}

USoundCue* UBiome::GetAmbientSounds() const {
    return NULL;
}

UBiome::UBiome() {
    this->BiomeIndex = 0;
    this->IsTutorialBiome = false;
    this->ExtraCaveSize = 0.00f;
    this->RockMaterial = NULL;
    this->DirtMaterial = NULL;
    this->BurnedMaterialOverride = NULL;
    this->MissionCompleted = NULL;
    this->CeilingNoise = NULL;
    this->CeilingDetailNoise = NULL;
    this->WallNoise = NULL;
    this->WallDetailNoise = NULL;
    this->FloorNoise = NULL;
    this->FloorDetailNoise = NULL;
    this->PillarNoise = NULL;
    this->PillarDetailNoise = NULL;
    this->PillarSettings = NULL;
    this->TunnelCeilingNoise = NULL;
    this->TunnelWallNoise = NULL;
    this->TunnelFloorNoise = NULL;
    this->Use3DAmbient = false;
    this->SmallCaveReverbVolume = 1.00f;
    this->SmallCaveReverb = NULL;
    this->MediumCaveReverbVolume = 1.00f;
    this->MediumCaveReverb = NULL;
    this->LargeCaveReverbVolume = 1.00f;
    this->LargeCaveReverb = NULL;
    this->PlanetZoneSelectionWeight = 1.00f;
}

