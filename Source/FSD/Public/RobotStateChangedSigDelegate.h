#pragma once
#include "CoreMinimal.h"
#include "RobotStateChangedSigDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRobotStateChangedSig, uint8, aState);

