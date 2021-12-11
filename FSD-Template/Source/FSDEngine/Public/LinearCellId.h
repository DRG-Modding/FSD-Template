#pragma once
#include "CoreMinimal.h"
#include "LinearCellId.generated.h"

USTRUCT()
struct FLinearCellId {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 X;
    
    UPROPERTY()
    uint16 Y;
    
    UPROPERTY()
    uint16 Z;
    
    FSDENGINE_API FLinearCellId();
};

