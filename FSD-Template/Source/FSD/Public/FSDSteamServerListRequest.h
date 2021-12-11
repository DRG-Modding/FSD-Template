#pragma once
#include "CoreMinimal.h"
#include "FSDServerListRequest.h"
#include "FSDSteamServerListRequest.generated.h"

USTRUCT()
struct FFSDSteamServerListRequest : public FFSDServerListRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SteamTicket;
    
    UPROPERTY()
    FString SteamPingLoc;
    
    UPROPERTY()
    TArray<int32> GameTypes;
    
    FSD_API FFSDSteamServerListRequest();
};

