#pragma once
#include "CoreMinimal.h"
#include "FSDServerListRequest.h"
#include "FSDSteamServerListRequest.generated.h"

USTRUCT()
struct FFSDSteamServerListRequest : public FFSDServerListRequest {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SteamPingLoc;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<int32> GameTypes;
    
    FSD_API FFSDSteamServerListRequest();
};

