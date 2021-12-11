#pragma once
#include "CoreMinimal.h"
#include "CSGSingleChildBase.h"
#include "RemappedProperties.h"
#include "CSGRemapped.generated.h"

UCLASS(BlueprintType)
class UCSGRemapped : public UCSGSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRemappedProperties Properties;
    
    UCSGRemapped();
};

