#pragma once
#include "CoreMinimal.h"
#include "EBlueprintablePrivilegeResults.generated.h"

UENUM()
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

