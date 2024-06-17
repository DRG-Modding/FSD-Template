#pragma once
#include "CoreMinimal.h"
#include "FSDEventWithEnd.generated.h"

USTRUCT(BlueprintType)
struct FFSDEventWithEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventExpirationDate;
    
    FSD_API FFSDEventWithEnd();
};

