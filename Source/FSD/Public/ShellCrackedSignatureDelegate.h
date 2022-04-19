#pragma once
#include "CoreMinimal.h"
#include "ShellCrackedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShellCrackedSignature, int32, numberOfShellsCracked);

