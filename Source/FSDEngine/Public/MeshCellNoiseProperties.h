#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshCellNoiseProperties.generated.h"

USTRUCT(BlueprintType)
struct FMeshCellNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CellSize;
    
    UPROPERTY(EditAnywhere)
    float CellOffsetFactor;
    
    UPROPERTY(EditAnywhere)
    float InsideFraction;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FMeshCellNoiseProperties();
};

