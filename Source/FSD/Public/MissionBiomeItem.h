#pragma once
#include "CoreMinimal.h"
#include "MissionBiomeItem.generated.h"

class UBiome;

USTRUCT(BlueprintType)
struct FMissionBiomeItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBiome* Biome;
    
    UPROPERTY(EditAnywhere)
    float Rarity;
    
public:
    FSD_API FMissionBiomeItem();
};

