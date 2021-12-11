#pragma once
#include "CoreMinimal.h"
#include "CollectableSpawnableItem.generated.h"

class UCollectableResourceData;

USTRUCT(BlueprintType)
struct FCollectableSpawnableItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCollectableResourceData* Resource;
    
    UPROPERTY(Transient)
    int32 Amount;
    
    FSD_API FCollectableSpawnableItem();
};

