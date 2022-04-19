#pragma once
#include "CoreMinimal.h"
#include "CloudSaveRequest.generated.h"

USTRUCT()
struct FCloudSaveRequest {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString PSTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 PlayerRank;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 SaveToDiskCounter;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString RawData;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString Branch;
    
    FSD_API FCloudSaveRequest();
};

