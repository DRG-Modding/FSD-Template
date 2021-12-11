#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TerrainType.generated.h"

class USoundCue;
class UParticleSystem;

UCLASS(BlueprintType, MinimalAPI)
class UTerrainType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Collide: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Diggable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Precious: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* DebrisStandardSoundCue;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UParticleSystem> DebrisStandardParticles;
    
public:
    UTerrainType();
};

