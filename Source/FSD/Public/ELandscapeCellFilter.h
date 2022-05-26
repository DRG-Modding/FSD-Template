#pragma once
#include "CoreMinimal.h"
#include "ELandscapeCellFilter.generated.h"

UENUM(BlueprintType)
enum class ELandscapeCellFilter : uint8 {
    Any,
    Empty,
    Filled,
    Diggable,
    NotDiggable,
    Collidable,
    NotCollidable,
    Rubble,
    NotRubble,
};

