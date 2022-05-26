#pragma once
#include "CoreMinimal.h"
#include "EBulletMode.generated.h"

UENUM(BlueprintType)
enum class EBulletMode : uint8 {
    EMultiTrace,
    ECapsule,
};

