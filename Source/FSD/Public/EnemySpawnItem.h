#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnItem.generated.h"

class UEnemyDescriptor;

USTRUCT()
struct FEnemySpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* enemy;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    int32 count;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    float VeteranComposition;
    
    FSD_API FEnemySpawnItem();
};

