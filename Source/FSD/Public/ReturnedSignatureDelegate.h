#pragma once
#include "CoreMinimal.h"
#include "ReturnedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnedSignature, AActor*, Sender, bool, Succes);

