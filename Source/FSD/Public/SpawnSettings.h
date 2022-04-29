#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RandRange.h"
#include "SpawnSettings.generated.h"

class USoundCue;
class UNiagaraSystem;

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

