#pragma once
#include "CoreMinimal.h"
#include "Hackprogress_DelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackprogress_Delegate, float, hackProgress);

