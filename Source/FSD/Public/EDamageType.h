#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    Fire,
    Cold,
    Melee,
    Kinetic,
    Explosive,
    Stun,
    Electrocution,
    Fear,
    Radiation,
    Pheromone,
    Poison,
    ArmorBreaking,
    Push,
    Grab,
    None,
    Slow,
    Defense,
    TemperatureShock,
    Corrosive,
    Piercing,
};

