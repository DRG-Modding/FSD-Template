#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RandRange.h"
#include "SpawnSettings.generated.h"

class UNiagaraSystem;
class USoundCue;

UCLASS(Blueprintable)
class USpawnSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> SpawnEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundCue>> SpawnSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange SpawnDuration;
    
public:
    USpawnSettings();

};

