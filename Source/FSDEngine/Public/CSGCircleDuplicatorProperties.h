#pragma once
#include "CoreMinimal.h"
#include "CSGCircleDuplicatorProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGCircleDuplicatorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    FSDENGINE_API FCSGCircleDuplicatorProperties();
};

