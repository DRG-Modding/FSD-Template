#pragma once
#include "CoreMinimal.h"
#include "CountDownFloat.generated.h"

USTRUCT(BlueprintType)
struct FCountDownFloat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CountDownDuration;
    
public:
    FSD_API FCountDownFloat();
};

