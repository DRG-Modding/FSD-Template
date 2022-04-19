#pragma once
#include "CoreMinimal.h"
#include "CloudLoadRequest.generated.h"

USTRUCT()
struct FCloudLoadRequest {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString PSTicket;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString Branch;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    FSD_API FCloudLoadRequest();
};

