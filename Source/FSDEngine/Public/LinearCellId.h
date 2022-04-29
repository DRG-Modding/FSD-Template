#pragma once
#include "CoreMinimal.h"
#include "LinearCellId.generated.h"

USTRUCT(BlueprintType)
struct FLinearCellId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 X;
    
    UPROPERTY(EditAnywhere)
    uint16 Y;
    
    UPROPERTY(EditAnywhere)
    uint16 Z;
    
    FSDENGINE_API FLinearCellId();
};

