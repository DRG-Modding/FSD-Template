#pragma once
#include "CoreMinimal.h"
#include "MissionBiomeItem.generated.h"

class UBiome;

USTRUCT(BlueprintType)
struct FMissionBiomeItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
public:
    FSD_API FMissionBiomeItem();
};

