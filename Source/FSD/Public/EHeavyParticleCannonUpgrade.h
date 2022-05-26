#pragma once
#include "CoreMinimal.h"
#include "EHeavyParticleCannonUpgrade.generated.h"

UENUM(BlueprintType)
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

