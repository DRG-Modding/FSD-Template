#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaveEntry.generated.h"

class UEnemyWaveController;

USTRUCT(BlueprintType)
struct FWaveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<UEnemyWaveController> WaveControllerLoaded;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UEnemyWaveController> WaveController;
    
public:
    FSD_API FWaveEntry();
};

