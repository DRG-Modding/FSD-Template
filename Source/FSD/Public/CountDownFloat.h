#pragma once
#include "CoreMinimal.h"
#include "CountDownFloat.generated.h"

USTRUCT(BlueprintType)
struct FCountDownFloat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountDownDuration;
    
public:
    FSD_API FCountDownFloat();
};

