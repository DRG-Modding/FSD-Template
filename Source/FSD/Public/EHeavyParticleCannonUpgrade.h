#pragma once
#include "CoreMinimal.h"
#include "EHeavyParticleCannonUpgrade.generated.h"

UENUM()
enum class EHeavyParticleCannonUpgrade : uint8 {
    ReloadOnButtonRelease,
    BoosterModule,
    KillAddsBeamSeconds,
    RadialDamageIncPerSecond,
    RadialRangeIncPerSecond,
    BulkyBeam,
    ProjectionModule,
};

