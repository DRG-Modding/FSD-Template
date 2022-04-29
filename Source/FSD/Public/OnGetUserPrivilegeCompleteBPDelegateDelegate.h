#pragma once
#include "CoreMinimal.h"
#include "EBlueprintablePrivilegeResults.h"
#include "EBlueprintableUserPrivileges.h"
#include "OnGetUserPrivilegeCompleteBPDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGetUserPrivilegeCompleteBPDelegate, const APlayerState*, CheckedPlayerState, EBlueprintableUserPrivileges, CheckedPrivilege, EBlueprintablePrivilegeResults, PrivilegeResult);

