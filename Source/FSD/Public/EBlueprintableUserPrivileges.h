#pragma once
#include "CoreMinimal.h"
#include "EBlueprintableUserPrivileges.generated.h"

UENUM(BlueprintType)
enum class EBlueprintableUserPrivileges : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
    CanUserCrossPlay,
};

