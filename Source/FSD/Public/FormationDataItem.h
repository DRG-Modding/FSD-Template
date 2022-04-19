#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FormationDataItem.generated.h"

USTRUCT(BlueprintType)
struct FFormationDataItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FSD_API FFormationDataItem();
};

