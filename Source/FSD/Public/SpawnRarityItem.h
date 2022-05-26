#pragma once
#include "CoreMinimal.h"
#include "SpawnRarityItem.generated.h"

USTRUCT(BlueprintType)
struct FSpawnRarityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
    FSD_API FSpawnRarityItem();
};

