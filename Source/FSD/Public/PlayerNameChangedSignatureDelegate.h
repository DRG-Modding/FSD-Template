#pragma once
#include "CoreMinimal.h"
#include "PlayerNameChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerNameChangedSignature, const FString&, NewName);

