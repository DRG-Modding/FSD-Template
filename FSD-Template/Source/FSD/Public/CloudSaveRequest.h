#pragma once
#include "CoreMinimal.h"
#include "CloudSaveRequest.generated.h"

USTRUCT()
struct FCloudSaveRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SteamTicket;
    
    UPROPERTY()
    FString PSTicket;
    
    UPROPERTY()
    int32 PlayerRank;
    
    UPROPERTY()
    int32 SaveToDiskCounter;
    
    UPROPERTY()
    FString RawData;
    
    UPROPERTY()
    FString Branch;
    
    FSD_API FCloudSaveRequest();
};

