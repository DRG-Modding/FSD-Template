#pragma once
#include "CoreMinimal.h"
#include "LevelGenerationStateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelGenerationStateSignature, const FString&, NewState);

