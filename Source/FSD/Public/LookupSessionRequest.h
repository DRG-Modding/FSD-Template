#pragma once
#include "CoreMinimal.h"
#include "LookupSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct FLookupSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionKey;
    
    FSD_API FLookupSessionRequest();
};

