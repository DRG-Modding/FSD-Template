#pragma once
#include "CoreMinimal.h"
#include "ESaveSlotChangeProcedure.generated.h"

UENUM(BlueprintType)
enum class ESaveSlotChangeProcedure : uint8 {
    NewSave,
    Load,
    Save,
    NewModdedSave,
};

