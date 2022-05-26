#pragma once
#include "CoreMinimal.h"
#include "EMovementCustomMode.generated.h"

UENUM(BlueprintType)
enum EMovementCustomMode {
    MOVE_Custom_None,
    MOVE_Custom_Track,
    MOVE_Custom_CharacterStateControlled,
    MOVE_Custom_TraversalTool,
    MOVE_Custom_MAX UMETA(Hidden),
};

