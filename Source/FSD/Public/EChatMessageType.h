#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.generated.h"

UENUM(BlueprintType)
enum class EChatMessageType : uint8 {
    ES_Chat,
    ES_Game,
    ES_MAX UMETA(Hidden),
};

