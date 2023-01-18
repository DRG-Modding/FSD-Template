#pragma once
#include "CoreMinimal.h"
#include "TestTerrainMaterialItem.generated.h"

class UFXSystemAsset;
class USoundCue;
class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FTestTerrainMaterialItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> DigParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> PartialDigParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CrumbleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> PartialMineSound;
    
    FSD_API FTestTerrainMaterialItem();
};

