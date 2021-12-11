#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptorItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEnemyGroupDescriptorItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnemyDescriptor* EnemyDescriptor;
    
    FSD_API FEnemyGroupDescriptorItem();
};

