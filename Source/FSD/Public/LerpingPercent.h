#pragma once
#include "CoreMinimal.h"
#include "LerpingPercent.generated.h"

USTRUCT(BlueprintType)
struct FLerpingPercent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    uint8 TargetPercent;
    
public:
    FSD_API FLerpingPercent();
};

