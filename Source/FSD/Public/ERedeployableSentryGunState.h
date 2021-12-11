#pragma once
#include "CoreMinimal.h"
#include "ERedeployableSentryGunState.generated.h"

UENUM(BlueprintType)
enum class ERedeployableSentryGunState : uint8 {
    Deploying,
    Deployed,
    Dismantling,
    Dismantled,
};

