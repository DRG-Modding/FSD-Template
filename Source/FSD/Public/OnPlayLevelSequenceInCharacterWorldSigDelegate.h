#pragma once
#include "CoreMinimal.h"
#include "OnPlayLevelSequenceInCharacterWorldSigDelegate.generated.h"

class ULevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayLevelSequenceInCharacterWorldSig, ULevelSequence*, CharacterLevelSequence);

