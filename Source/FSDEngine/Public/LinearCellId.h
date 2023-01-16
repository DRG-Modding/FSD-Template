#pragma once
#include "CoreMinimal.h"
#include "LinearCellId.generated.h"

USTRUCT(BlueprintType)
struct FLinearCellId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Z;
    
    FSDENGINE_API FLinearCellId();
};

