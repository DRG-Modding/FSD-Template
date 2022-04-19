#include "GlowPlant.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;

void AGlowPlant::OnDeath_Implementation() {
}

void AGlowPlant::OnDamage_Implementation(UPrimitiveComponent* hitSphere) {
}

AGlowPlant::AGlowPlant() {
    this->TrunkMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->MainLight = NULL;
    this->IntensityBase = 0.00f;
    this->RadiusBase = 0.00f;
    this->IntensityPerPart = 0.00f;
    this->RadiusPerPart = 0.00f;
    this->IntensityAllParts = 0.00f;
    this->RadiusAllParts = 0.00f;
    this->MaxIntensity = 0.00f;
    this->MinIntensity = 0.00f;
    this->TimeOnMaxLight = 0.00f;
    this->IntensityFadeInTime = 0.00f;
    this->IntensityFadeOutTime = 0.00f;
    this->MaxEmissive = 0.00f;
    this->MinEmissive = 0.00f;
    this->EmissiveFadeInTime = 0.00f;
    this->EmissiveFadeOutTime = 0.00f;
}

