#pragma once
#include "CoreMinimal.h"
#include "FactionsDataDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFactionsDataDelegate, const TArray<FString>&, Goals, const TArray<float>&, Values, const TArray<int32>&, Members);

