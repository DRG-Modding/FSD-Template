#pragma once
#include "CoreMinimal.h"
#include "FSDServerListRequest.h"
#include "FSDSteamServerListRequest.generated.h"

USTRUCT(BlueprintType)
struct FFSDSteamServerListRequest : public FFSDServerListRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamPingLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GameTypes;
    
    FSD_API FFSDSteamServerListRequest();
};

