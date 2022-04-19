#pragma once
#include "CoreMinimal.h"
#include "CannisterRegisteredDelegate.generated.h"

class AExtractorItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCannisterRegistered, AExtractorItem*, Item);

