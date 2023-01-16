#pragma once
#include "CoreMinimal.h"
#include "CSGRandomDisableProperties.h"
#include "CSGSingleChildBase.h"
#include "CSGRandomDisable.generated.h"

UCLASS(Blueprintable)
class UCSGRandomDisable : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGRandomDisableProperties Properties;
    
    UCSGRandomDisable();
};

