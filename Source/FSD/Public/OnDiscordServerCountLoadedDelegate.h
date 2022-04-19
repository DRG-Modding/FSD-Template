#pragma once
#include "CoreMinimal.h"
#include "DiscordServerData.h"
#include "OnDiscordServerCountLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDiscordServerCountLoaded, const FDiscordServerData&, discordServerCount);

