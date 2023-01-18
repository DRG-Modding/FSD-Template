#pragma once
#include "CoreMinimal.h"
#include "ECharselectionCameraLocation.h"
#include "Templates/SubclassOf.h"
#include "ShowCharacterSelectorSignatureDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShowCharacterSelectorSignature, TSubclassOf<APlayerCharacter>, NewCharacter, ECharselectionCameraLocation, selectionLocation);

