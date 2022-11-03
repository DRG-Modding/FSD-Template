#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "Engine/DataAsset.h"
#include "SpawnSettings.generated.h"

class UNiagaraSystem;
class USoundCue;

UCLASS(Blueprintable)
class USpawnSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> SpawnEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<USoundCue*> SpawnSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange SpawnDuration;
    
public:
    USpawnSettings();
};

