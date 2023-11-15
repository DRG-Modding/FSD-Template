#pragma once
#include "CoreMinimal.h"
#include "EOnProjectileImpactBehaviourEnum.generated.h"

UENUM()
enum class EOnProjectileImpactBehaviourEnum : int32 {
    CallOnPredict,
    CallOnConfirmed,
    CallOnPredictAndConfirmed,
    ClientAuthoritative,
};

