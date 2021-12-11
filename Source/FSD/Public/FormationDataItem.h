#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FormationDataItem.generated.h"

USTRUCT(BlueprintType)
struct FFormationDataItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector Direction;
    
    UPROPERTY(VisibleAnywhere)
    float Distance;
    
    FSD_API FFormationDataItem();
};

