#pragma once
#include "CoreMinimal.h"
#include "EChatSenderType.generated.h"

UENUM(BlueprintType)
enum class EChatSenderType : uint8 {
    NormalUser,
    DeluxUser,
    Developer,
    Streamer,
    Modder,
};

