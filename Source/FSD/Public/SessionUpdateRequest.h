#pragma once
#include "CoreMinimal.h"
#include "SessionUpdateRequest.generated.h"

USTRUCT()
struct FSessionUpdateRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SessionKey;
    
    UPROPERTY()
    int32 NumPlayers;
    
    FSD_API FSessionUpdateRequest();
};

