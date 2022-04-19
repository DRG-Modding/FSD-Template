#pragma once
#include "CoreMinimal.h"
#include "EUGCDownloadVersion.generated.h"

UENUM(BlueprintType)
enum class EUGCDownloadVersion : uint8 {
    Optional,
    Required,
    All = 0xFF,
};

