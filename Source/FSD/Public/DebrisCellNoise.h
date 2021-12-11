#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "DebrisCellNoise.generated.h"

UCLASS(BlueprintType)
class UDebrisCellNoise : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CellSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumValues;
    
    UPROPERTY(Transient)
    FVector InvCellSize;
    
    UPROPERTY(Transient)
    bool Initialized;
    
    UDebrisCellNoise();
};

