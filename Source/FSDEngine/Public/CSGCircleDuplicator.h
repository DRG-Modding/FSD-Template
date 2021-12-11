#pragma once
#include "CoreMinimal.h"
#include "CSGCircleDuplicatorProperties.h"
#include "CSGDuplicateSingleChildBase.h"
#include "CSGCircleDuplicator.generated.h"

UCLASS(BlueprintType)
class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGCircleDuplicatorProperties Properties;
    
    UCSGCircleDuplicator();
};

