#include "GuntowerLineProjectile.h"

void AGuntowerLineProjectile::TurnOffParticles() {
}

void AGuntowerLineProjectile::Fire(const FVector& Origin, const FVector& Direction, float Distance) {
}

AGuntowerLineProjectile::AGuntowerLineProjectile() {
    this->PlatformDissolveRadius = 150.00f;
    this->PlatformDissolveSqueeze = 3.00f;
    this->HitParticles = NULL;
    this->TimeBetweenLineChecks = 0.00f;
}

