#pragma once
#include "CoreMinimal.h"
#include "EFriendOnlineStatusEnum.generated.h"

UENUM(BlueprintType)
enum class EFriendOnlineStatusEnum : uint8 {
    Online,
    Offline,
    Away,
};

