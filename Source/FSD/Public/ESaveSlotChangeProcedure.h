#pragma once
#include "CoreMinimal.h"
#include "ESaveSlotChangeProcedure.generated.h"

UENUM()
enum class ESaveSlotChangeProcedure : uint8 {
    NewSave,
    Load,
    Save,
    NewModdedSave,
};

