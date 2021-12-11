#pragma once
#include "CoreMinimal.h"
#include "EInviteBlockReason.generated.h"

UENUM()
enum class EInviteBlockReason : uint8 {
    SoloSession,
    ActiveDeepDive,
    Tutorial,
    OnlinePlayBlocked,
    IsClient,
    None,
};

