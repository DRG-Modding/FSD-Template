#pragma once
#include "CoreMinimal.h"
#include "EFSDInputSource.generated.h"

UENUM(BlueprintType)
enum class EFSDInputSource : uint8 {
    None,
    MouseAndKeyboard,
    Controller,
};

