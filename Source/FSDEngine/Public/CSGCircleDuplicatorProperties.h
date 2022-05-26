#pragma once
#include "CoreMinimal.h"
#include "CSGCircleDuplicatorProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGCircleDuplicatorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSDENGINE_API FCSGCircleDuplicatorProperties();
};

