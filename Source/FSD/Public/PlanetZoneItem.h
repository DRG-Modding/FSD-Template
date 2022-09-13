#pragma once
#include "CoreMinimal.h"
#include "PlanetZoneItem.generated.h"

class UPlanetZone;
class UBiome;
class UGeneratedMission;

USTRUCT(BlueprintType)
struct FPlanetZoneItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBiome*> Biomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGeneratedMission*> missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlanetZone* Zone;
    
    FSD_API FPlanetZoneItem();
};

