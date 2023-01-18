#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "WarpedProperties.h"
#include "CSGWarped.generated.h"

UCLASS(Blueprintable)
class UCSGWarped : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpedProperties Properties;
    
    UCSGWarped();
};

