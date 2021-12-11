#pragma once
#include "CoreMinimal.h"
#include "SessionUpdateResponse.generated.h"

USTRUCT()
struct FSessionUpdateResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool success;
    
    FSD_API FSessionUpdateResponse();
};

