#pragma once
#include "CoreMinimal.h"
#include "HandleRotationOptions.generated.h"

USTRUCT(BlueprintType)
struct FHandleRotationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HandlePitch;
    
    FSD_API FHandleRotationOptions();
};

