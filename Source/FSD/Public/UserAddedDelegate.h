#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "UserAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUserAdded, const TArray<FUniqueNetIdRepl>&, userList);

