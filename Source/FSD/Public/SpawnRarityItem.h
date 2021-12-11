#pragma once
#include "CoreMinimal.h"
#include "SpawnRarityItem.generated.h"

USTRUCT(BlueprintType)
struct FSpawnRarityItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float Rarity;
    
    FSD_API FSpawnRarityItem();
};

