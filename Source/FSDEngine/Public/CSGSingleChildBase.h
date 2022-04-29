#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGSingleChildBase.generated.h"

UCLASS(Blueprintable)
class UCSGSingleChildBase : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCSGBase* Child;
    
    UCSGSingleChildBase();
};

