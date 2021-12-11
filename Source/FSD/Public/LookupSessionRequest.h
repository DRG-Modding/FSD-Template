#pragma once
#include "CoreMinimal.h"
#include "LookupSessionRequest.generated.h"

USTRUCT()
struct FLookupSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SessionKey;
    
    FSD_API FLookupSessionRequest();
};

