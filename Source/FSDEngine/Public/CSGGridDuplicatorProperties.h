#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSGGridDuplicatorProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGGridDuplicatorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionB;
    
    FSDENGINE_API FCSGGridDuplicatorProperties();
};

