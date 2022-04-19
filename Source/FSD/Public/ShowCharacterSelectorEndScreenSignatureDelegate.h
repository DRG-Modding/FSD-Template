#pragma once
#include "CoreMinimal.h"
#include "CharacterViewScene.h"
#include "ShowCharacterSelectorEndScreenSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowCharacterSelectorEndScreenSignature, FCharacterViewScene, viewScene);

