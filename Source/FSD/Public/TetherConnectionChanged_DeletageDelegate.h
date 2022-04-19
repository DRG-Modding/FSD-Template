#pragma once
#include "CoreMinimal.h"
#include "TetherConnectionChanged_DeletageDelegate.generated.h"

class UTetherComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTetherConnectionChanged_Deletage, UTetherComponent*, frontConnection, UTetherComponent*, backConnection);

