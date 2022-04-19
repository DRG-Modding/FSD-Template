#pragma once
#include "CoreMinimal.h"
#include "RemoveFloatingIslandOperationData.generated.h"

USTRUCT(BlueprintType)
struct FRemoveFloatingIslandOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    FSD_API FRemoveFloatingIslandOperationData();
};

