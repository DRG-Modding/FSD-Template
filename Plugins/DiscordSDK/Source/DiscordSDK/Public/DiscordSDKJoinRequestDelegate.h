#pragma once
#include "CoreMinimal.h"
#include "DiscordUserDataSDK.h"
#include "DiscordSDKJoinRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordSDKJoinRequest, const FDiscordUserDataSDK&, joinRequest);

