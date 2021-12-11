#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CSGRandomizeTransformProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGRandomizeTransformProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBox Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMinZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMaxZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMinY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMaxY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMinX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationMaxX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScaleAxesIndependent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableRandomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    FSDENGINE_API FCSGRandomizeTransformProperties();
};

