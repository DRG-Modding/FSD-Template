#pragma once
#include "CoreMinimal.h"
#include "DiscordFactionRoleRequest.generated.h"

USTRUCT(BlueprintType)
struct FDiscordFactionRoleRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FactionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    FSD_API FDiscordFactionRoleRequest();
};

