#pragma once
#include "CoreMinimal.h"
#include "CSGDuplicateSingleChildBase.h"
#include "CSGCircleDuplicatorProperties.h"
#include "CSGCircleDuplicator.generated.h"

UCLASS(Blueprintable)
class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGCircleDuplicatorProperties Properties;
    
    UCSGCircleDuplicator();
};

