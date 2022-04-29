#pragma once
#include "CoreMinimal.h"
#include "PlayerDefrostingSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDefrostingSignature, float, Progress);

