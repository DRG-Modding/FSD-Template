#pragma once
#include "CoreMinimal.h"
#include "DebrisWhenCarving.generated.h"

class UDebrisInstances;

USTRUCT(BlueprintType)
struct FDebrisWhenCarving {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDebrisInstances* Debris;
    
    FSD_API FDebrisWhenCarving();
};

