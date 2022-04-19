#pragma once
#include "CoreMinimal.h"
#include "FSDDeepDiveResponse.generated.h"

USTRUCT()
struct FFSDDeepDiveResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint32 SeedV2;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString ExpirationTime;
    
    FSD_API FFSDDeepDiveResponse();
};

