#pragma once
#include "CoreMinimal.h"
#include "ELandscapeCellFilter.generated.h"

UENUM()
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

