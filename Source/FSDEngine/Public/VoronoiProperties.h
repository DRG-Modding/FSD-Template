#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoronoiProperties.generated.h"

USTRUCT(BlueprintType)
struct FVoronoiProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Inverted;
    
    FSDENGINE_API FVoronoiProperties();
};

