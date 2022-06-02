#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlanetZoneSetup.generated.h"

class UPlanetZone;
class UBiome;

UCLASS(Blueprintable)
class UPlanetZoneSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlanetZone*> PlanetZones;
    
public:
    UPlanetZoneSetup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlanetZone* GetPlanetZoneForBiome(UBiome* Biome) const;
    
};

