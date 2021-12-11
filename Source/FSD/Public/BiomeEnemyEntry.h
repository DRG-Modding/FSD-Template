#pragma once
#include "CoreMinimal.h"
#include "BiomeEnemyEntry.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FBiomeEnemyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnemyDescriptor* enemy;
    
    UPROPERTY(EditAnywhere)
    bool IsDistruptive;
    
    FSD_API FBiomeEnemyEntry();
};

