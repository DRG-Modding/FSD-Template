#pragma once
#include "CoreMinimal.h"
#include "TutorialManagerSignatureDelegate.generated.h"

class ATutorialManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialManagerSignature, ATutorialManager*, NewManager);

