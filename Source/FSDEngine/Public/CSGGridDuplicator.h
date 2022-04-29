#pragma once
#include "CoreMinimal.h"
#include "CSGDuplicateSingleChildBase.h"
#include "CSGGridDuplicatorProperties.h"
#include "CSGGridDuplicator.generated.h"

UCLASS(Blueprintable)
class UCSGGridDuplicator : public UCSGDuplicateSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGGridDuplicatorProperties Properties;
    
    UCSGGridDuplicator();
};

