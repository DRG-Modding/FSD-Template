#pragma once
#include "CoreMinimal.h"
#include "BarleySpawnItem.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FBarleySpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    FSD_API FBarleySpawnItem();
};

