#pragma once
#include "CoreMinimal.h"
#include "HandleRotationOptions.generated.h"

USTRUCT(BlueprintType)
struct FHandleRotationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandlePitch;
    
    FSD_API FHandleRotationOptions();
};

