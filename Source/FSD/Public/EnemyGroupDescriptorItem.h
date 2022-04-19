#pragma once
#include "CoreMinimal.h"
#include "EnemyGroupDescriptorItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEnemyGroupDescriptorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* EnemyDescriptor;
    
    FSD_API FEnemyGroupDescriptorItem();
};

