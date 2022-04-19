#pragma once
#include "CoreMinimal.h"
#include "CellId.h"
#include "CellBox.generated.h"

USTRUCT()
struct FCellBox {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FCellId Min;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FCellId Max;
    
    FSDENGINE_API FCellBox();
};

