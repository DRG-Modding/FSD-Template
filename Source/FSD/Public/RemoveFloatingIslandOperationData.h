#pragma once
#include "CoreMinimal.h"
#include "RemoveFloatingIslandOperationData.generated.h"

USTRUCT(BlueprintType)
struct FRemoveFloatingIslandOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    FSD_API FRemoveFloatingIslandOperationData();
};

