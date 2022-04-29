#pragma once
#include "CoreMinimal.h"
#include "CellId.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FCellId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 X;
    
    UPROPERTY(EditAnywhere)
    int16 Y;
    
    UPROPERTY(EditAnywhere)
    int16 Z;
    
    FCellId();
};

