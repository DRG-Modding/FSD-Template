#pragma once
#include "CoreMinimal.h"
#include "CloudLoadRequest.generated.h"

USTRUCT()
struct FCloudLoadRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SteamTicket;
    
    UPROPERTY()
    FString PSTicket;
    
    UPROPERTY()
    FString Branch;
    
    UPROPERTY()
    int32 Offset;
    
    FSD_API FCloudLoadRequest();
};

