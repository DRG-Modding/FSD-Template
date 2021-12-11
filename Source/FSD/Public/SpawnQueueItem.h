#pragma once
#include "CoreMinimal.h"
#include "SpawnQueueItem.generated.h"

class APawn;
class UEnemyDescriptor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawnQueueItemCallback, APawn*, enemy);

USTRUCT(BlueprintType)
struct FSpawnQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSoftClassPtr<APawn> EnemyClass;
    
    UPROPERTY(Transient)
    UEnemyDescriptor* enemy;
    
    UPROPERTY()
    FSpawnQueueItemCallback Callback;
    
    FSD_API FSpawnQueueItem();
};

