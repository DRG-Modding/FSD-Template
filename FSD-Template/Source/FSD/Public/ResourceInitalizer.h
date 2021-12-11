#pragma once
#include "CoreMinimal.h"
#include "ResourceInitalizer.generated.h"

class UResourceData;

USTRUCT()
struct FResourceInitalizer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float MaxAmount;
    
    FSD_API FResourceInitalizer();
};

