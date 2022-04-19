#pragma once
#include "CoreMinimal.h"
#include "LanguageChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLanguageChanged, const FString&, Culture);

