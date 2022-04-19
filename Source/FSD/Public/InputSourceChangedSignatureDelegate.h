#pragma once
#include "CoreMinimal.h"
#include "EFSDInputSource.h"
#include "InputSourceChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputSourceChangedSignature, EFSDInputSource, InputSource);

