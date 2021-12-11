#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RandRange.h"
#include "SpawnSettings.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS()
class USpawnSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> SpawnEffects;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<USoundCue*> SpawnSounds;
    
    UPROPERTY(EditAnywhere)
    FRandRange SpawnDuration;
    
public:
    USpawnSettings();
};

