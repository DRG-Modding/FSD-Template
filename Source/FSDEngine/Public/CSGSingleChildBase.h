#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGSingleChildBase.generated.h"

UCLASS()
class UCSGSingleChildBase : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UCSGBase* Child;
    
    UCSGSingleChildBase();
};

