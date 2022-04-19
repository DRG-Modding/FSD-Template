#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptorSpawnItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEnemyGroupDescriptorSpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* enemy;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 count;
    
    FSD_API FEnemyGroupDescriptorSpawnItem();
};

