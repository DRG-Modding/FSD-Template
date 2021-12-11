#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "CSGRandomDisableProperties.h"
#include "CSGRandomDisable.generated.h"

UCLASS(BlueprintType)
class UCSGRandomDisable : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGRandomDisableProperties Properties;
    
    UCSGRandomDisable();
};

