#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttachChangeSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttachChangeSig, bool, Attached, FVector, PrevScale);

