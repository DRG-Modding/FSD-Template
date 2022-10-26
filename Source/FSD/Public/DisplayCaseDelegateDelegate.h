#pragma once
#include "CoreMinimal.h"
#include "DisplayContent.h"
#include "DisplayCaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplayCaseDelegate, const FDisplayContent&, Content);

