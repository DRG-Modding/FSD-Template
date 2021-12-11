#pragma once
#include "CoreMinimal.h"
#include "EServerSortOrder.generated.h"

UENUM()
enum class EServerSortOrder : uint8 {
    Mission,
    Players,
    Length,
    Complexity,
    Distance,
    Time,
    Difficulty,
};

