#pragma once
#include "CoreMinimal.h"
#include "CellId.h"
#include "CellBox.generated.h"

USTRUCT()
struct FCellBox {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCellId Min;
    
    UPROPERTY()
    FCellId Max;
    
    FSDENGINE_API FCellBox();
};

