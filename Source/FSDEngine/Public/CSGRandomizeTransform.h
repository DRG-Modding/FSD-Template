#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "CSGRandomizeTransformProperties.h"
#include "CSGRandomizeTransform.generated.h"

UCLASS(BlueprintType)
class UCSGRandomizeTransform : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGRandomizeTransformProperties Properties;
    
    UCSGRandomizeTransform();
};

