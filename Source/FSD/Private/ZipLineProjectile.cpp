#include "ZipLineProjectile.h"

void AZipLineProjectile::OnTimelineTick(float NewValue) {
}


AZipLineProjectile::AZipLineProjectile() {
    this->LightIntensity = 2500.00f;
    this->MaterialGlow = 10.00f;
    this->LightCurve = NULL;
    this->OnUseStatusEffect = NULL;
    this->OnReleaseStatusEffect = NULL;
}

