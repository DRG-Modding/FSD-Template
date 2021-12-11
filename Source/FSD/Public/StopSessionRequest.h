#pragma once
#include "CoreMinimal.h"
#include "StopSessionRequest.generated.h"

USTRUCT()
struct FStopSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SessionKey;
    
    FSD_API FStopSessionRequest();
};

