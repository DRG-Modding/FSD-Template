#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathObstacle.generated.h"

USTRUCT(BlueprintType)
struct FPathObstacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite)
    float Radius;
    
    FSD_API FPathObstacle();
};

