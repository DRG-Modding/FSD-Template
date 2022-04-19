#pragma once
#include "CoreMinimal.h"
#include "DiscordFactionRoleRequest.generated.h"

USTRUCT()
struct FDiscordFactionRoleRequest {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 FactionID;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    FSD_API FDiscordFactionRoleRequest();
};

