#pragma once
#include "CoreMinimal.h"
#include "StopSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct FStopSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SessionKey;
    
    FSD_API FStopSessionRequest();
};

