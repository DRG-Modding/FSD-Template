#pragma once
#include "CoreMinimal.h"
#include "ResourceAddedDelegate.generated.h"

class UCappedResource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourceAdded, UCappedResource*, Resource);

