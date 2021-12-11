#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshCellNoiseProperties.generated.h"

USTRUCT(BlueprintType)
struct FMeshCellNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CellOffsetFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InsideFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    FSDENGINE_API FMeshCellNoiseProperties();
};

