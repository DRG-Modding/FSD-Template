#pragma once
#include "CoreMinimal.h"
#include "ECharselectionCameraLocation.h"
#include "ShowCharacterWorldSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowCharacterWorldSignature, ECharselectionCameraLocation, selectionLocation);

