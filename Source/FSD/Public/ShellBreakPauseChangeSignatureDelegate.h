#pragma once
#include "CoreMinimal.h"
#include "ShellBreakPauseChangeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShellBreakPauseChangeSignature, bool, IsPaused);

