#pragma once
#include "CoreMinimal.h"
#include "OnTokensChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTokensChangedSignature, int32, NumberOfTokens, int32, Change);

