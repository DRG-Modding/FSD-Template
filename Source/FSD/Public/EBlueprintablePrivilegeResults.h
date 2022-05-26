#pragma once
#include "CoreMinimal.h"
#include "EBlueprintablePrivilegeResults.generated.h"

UENUM(BlueprintType)
enum class EBlueprintablePrivilegeResults : uint8 {
    NoFailures,
    RequiredPatchAvailable,
    RequiredSystemUpdate,
    AgeRestrictionFailure,
    AccountTypeFailure,
    UserNotFound,
    UserNotLoggedIn,
    ChatRestriction,
    UGCRestriction,
    GenericFailure,
    OnlinePlayRestricted,
    NetworkConnectionUnavailable,
};

