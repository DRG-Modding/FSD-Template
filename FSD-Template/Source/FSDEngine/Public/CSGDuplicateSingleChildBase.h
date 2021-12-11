#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGDuplicateSingleChildBase.generated.h"

UCLASS()
class UCSGDuplicateSingleChildBase : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UCSGBase*> Children;
    
    UCSGDuplicateSingleChildBase();
};

