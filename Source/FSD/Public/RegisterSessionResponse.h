#pragma once
#include "CoreMinimal.h"
#include "RegisterSessionResponse.generated.h"

USTRUCT(BlueprintType)
struct FRegisterSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SessionKey;
    
    FSD_API FRegisterSessionResponse();
};

