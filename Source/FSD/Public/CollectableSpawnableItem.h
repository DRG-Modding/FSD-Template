#pragma once
#include "CoreMinimal.h"
#include "CollectableSpawnableItem.generated.h"

class UCollectableResourceData;

USTRUCT(BlueprintType)
struct FCollectableSpawnableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCollectableResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FSD_API FCollectableSpawnableItem();
};

