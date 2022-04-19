#pragma once
#include "CoreMinimal.h"
#include "BlueprintFriend.h"
#include "BlueprintGetFriendsListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintGetFriendsListDelegate, const TArray<FBlueprintFriend>&, Results);

