#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGGroup.generated.h"

UCLASS()
class UCSGGroup : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UCSGBase*> Children;
    
    UCSGGroup();
};

