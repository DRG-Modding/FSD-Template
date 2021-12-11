#pragma once
#include "CoreMinimal.h"
#include "EPreviewCellSize.h"
#include "RemappedProperties.generated.h"

USTRUCT(BlueprintType)
struct FRemappedProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPreviewCellSize CellSize;
    
    FSDENGINE_API FRemappedProperties();
};

