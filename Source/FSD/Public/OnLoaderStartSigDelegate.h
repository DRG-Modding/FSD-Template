#pragma once
#include "CoreMinimal.h"
#include "OnLoaderStartSigDelegate.generated.h"

class ULevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoaderStartSig, ULevelSequence*, LoaderLevelSequence);

