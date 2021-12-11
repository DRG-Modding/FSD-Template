#pragma once
#include "CoreMinimal.h"
#include "ESteamServerJoinStatus.generated.h"

UENUM(BlueprintType)
enum class ESteamServerJoinStatus : uint8 {
    Open,
    PasswordRequired,
};

