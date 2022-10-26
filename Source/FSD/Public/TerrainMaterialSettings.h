#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DecalData.h"
#include "TerrainMaterialSettings.generated.h"

class UTerrainMaterial;

UCLASS(Blueprintable, Const)
class UTerrainMaterialSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDecalData> TwoHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDecalData> ThreeHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDecalData> FourHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDecalData> FiveHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterial*> PlagueMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfectionIncreasePerPlagueHit;
    
    UTerrainMaterialSettings();
};

