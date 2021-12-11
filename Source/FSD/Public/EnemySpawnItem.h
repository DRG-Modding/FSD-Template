#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnItem.generated.h"

class UEnemyDescriptor;

USTRUCT()
struct FEnemySpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UEnemyDescriptor* enemy;
    
    UPROPERTY(Transient)
    int32 count;
    
    UPROPERTY(Transient)
    float VeteranComposition;
    
    FSD_API FEnemySpawnItem();
};

