#pragma once
#include "CoreMinimal.h"
#include "RegisterSessionResponse.generated.h"

USTRUCT()
struct FRegisterSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SessionKey;
    
    FSD_API FRegisterSessionResponse();
};

