#pragma once
#include "CoreMinimal.h"
#include "ESteamBranch.generated.h"

UENUM()
enum class ESteamBranch : uint8 {
    Main,
    Experimental,
    Internal_Testing,
    Other,
};

