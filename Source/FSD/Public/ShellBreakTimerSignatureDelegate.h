#pragma once
#include "CoreMinimal.h"
#include "ShellBreakTimerSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShellBreakTimerSignature, float, Progress);

