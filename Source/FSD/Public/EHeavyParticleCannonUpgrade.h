#pragma once
#include "CoreMinimal.h"
#include "EHeavyParticleCannonUpgrade.generated.h"

UENUM()
enum class EHeavyParticleCannonUpgrade : uint8 {
    ReloadOnButtonRelease,
    BoosterModule,
    KillAddsAmmo,
    RadialDamageIncPerSecond,
    RadialRangeIncPerSecond,
    BulkyBeam,
    ProjectionModule,
    PlatformExplosions,
};

