#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathObstacle.generated.h"

USTRUCT(BlueprintType)
struct FPathObstacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSD_API FPathObstacle();
};

