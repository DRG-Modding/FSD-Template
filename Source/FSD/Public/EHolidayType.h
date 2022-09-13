#pragma once
#include "CoreMinimal.h"
#include "EHolidayType.generated.h"

UENUM(BlueprintType)
enum class EHolidayType : uint8 {
    None,
    LunarFestival,
    Anniversary,
    Easter,
    BeachParty,
    Oktoberfest,
    Halloween,
    Xmas,
    OneOffEvent,
};

