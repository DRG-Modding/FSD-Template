#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "CSGRandomDisableProperties.h"
#include "CSGRandomDisable.generated.h"

UCLASS(Blueprintable)
class UCSGRandomDisable : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGRandomDisableProperties Properties;
    
    UCSGRandomDisable();
};

