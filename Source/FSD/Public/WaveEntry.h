#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaveEntry.generated.h"

class UEnemyWaveController;

USTRUCT(BlueprintType)
struct FWaveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnemyWaveController> WaveControllerLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnemyWaveController> WaveController;
    
public:
    FSD_API FWaveEntry();
};

