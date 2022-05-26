#pragma once
#include "CoreMinimal.h"
#include "ESteamBranch.generated.h"

UENUM(BlueprintType)
enum class ESteamBranch : uint8 {
    Main,
    Experimental,
    Internal_Testing,
    Other,
};

