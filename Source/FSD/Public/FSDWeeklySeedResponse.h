#pragma once
#include "CoreMinimal.h"
#include "FSDWeeklySeedResponse.generated.h"

USTRUCT(BlueprintType)
struct FFSDWeeklySeedResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExpirationTime;
    
    FSD_API FFSDWeeklySeedResponse();
};

