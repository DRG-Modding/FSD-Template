#pragma once
#include "CoreMinimal.h"
#include "StopSessionResponse.generated.h"

USTRUCT(BlueprintType)
struct FStopSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    FSD_API FStopSessionResponse();
};

