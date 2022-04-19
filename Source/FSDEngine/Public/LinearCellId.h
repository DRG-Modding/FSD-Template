#pragma once
#include "CoreMinimal.h"
#include "LinearCellId.generated.h"

USTRUCT()
struct FLinearCellId {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint16 Z;
    
    FSDENGINE_API FLinearCellId();
};

