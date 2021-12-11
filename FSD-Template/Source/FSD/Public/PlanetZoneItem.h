#pragma once
#include "CoreMinimal.h"
#include "PlanetZoneItem.generated.h"

class UGeneratedMission;
class UBiome;
class UPlanetZone;

USTRUCT()
struct FPlanetZoneItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UBiome*> Biomes;
    
    UPROPERTY(Transient)
    TArray<UGeneratedMission*> missions;
    
    UPROPERTY(Transient)
    UPlanetZone* Zone;
    
    FSD_API FPlanetZoneItem();
};

