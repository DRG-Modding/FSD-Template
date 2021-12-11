#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlanetZoneSetup.generated.h"

class UBiome;
class UPlanetZone;

UCLASS(BlueprintType)
class UPlanetZoneSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UPlanetZone*> PlanetZones;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlanetZone* GetPlanetZoneForBiome(UBiome* Biome) const;
    
    UPlanetZoneSetup();
};

