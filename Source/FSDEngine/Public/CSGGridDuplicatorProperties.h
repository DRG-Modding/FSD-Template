#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSGGridDuplicatorProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGGridDuplicatorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DirectionA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DirectionB;
    
    FSDENGINE_API FCSGGridDuplicatorProperties();
};

