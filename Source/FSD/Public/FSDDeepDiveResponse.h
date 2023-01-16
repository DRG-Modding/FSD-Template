#pragma once
#include "CoreMinimal.h"
#include "FSDDeepDiveResponse.generated.h"

USTRUCT(BlueprintType)
struct FFSDDeepDiveResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SeedV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExpirationTime;
    
    FSD_API FFSDDeepDiveResponse();
};

