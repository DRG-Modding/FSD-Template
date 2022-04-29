#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "CSGRandomizeTransformProperties.h"
#include "CSGRandomizeTransform.generated.h"

UCLASS(Blueprintable)
class UCSGRandomizeTransform : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGRandomizeTransformProperties Properties;
    
    UCSGRandomizeTransform();
};

