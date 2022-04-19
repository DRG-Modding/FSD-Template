#pragma once
#include "CoreMinimal.h"
#include "FSDWeeklySeedResponse.generated.h"

USTRUCT()
struct FFSDWeeklySeedResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint32 Seed;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString ExpirationTime;
    
    FSD_API FFSDWeeklySeedResponse();
};

