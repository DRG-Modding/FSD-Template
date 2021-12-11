#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptorSpawnItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEnemyGroupDescriptorSpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UEnemyDescriptor* enemy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 count;
    
    FSD_API FEnemyGroupDescriptorSpawnItem();
};

