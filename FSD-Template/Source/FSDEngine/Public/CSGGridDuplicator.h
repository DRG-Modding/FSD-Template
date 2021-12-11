#pragma once
#include "CoreMinimal.h"
#include "CSGDuplicateSingleChildBase.h"
#include "CSGGridDuplicatorProperties.h"
#include "CSGGridDuplicator.generated.h"

UCLASS(BlueprintType)
class UCSGGridDuplicator : public UCSGDuplicateSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGGridDuplicatorProperties Properties;
    
    UCSGGridDuplicator();
};

