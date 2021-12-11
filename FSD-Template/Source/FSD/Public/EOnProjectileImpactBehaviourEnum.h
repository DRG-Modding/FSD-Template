#pragma once
#include "CoreMinimal.h"
#include "EOnProjectileImpactBehaviourEnum.generated.h"

UENUM(BlueprintType)
enum class EOnProjectileImpactBehaviourEnum : uint8 {
    CallOnPredict,
    CallOnConfirmed,
    CallOnPredictAndConfirmed,
    ClientAuthoritative,
};

