#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECharselectionCameraLocation.h"
#include "ShowViewer3DSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShowViewer3DSignature, TSubclassOf<AActor>, Actor, ECharselectionCameraLocation, selectionLocation);

