#include "ZipLineProjectile.h"
#include "Components/TimelineComponent.h"

AZipLineProjectile::AZipLineProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightTimeLine"));
    this->LightIntensity = 2500.00f;
    this->MaterialGlow = 10.00f;
    this->LightCurve = NULL;
    this->OnUseStatusEffect = NULL;
    this->OnReleaseStatusEffect = NULL;
}

void AZipLineProjectile::OnTimelineTick(float NewValue) {
}



