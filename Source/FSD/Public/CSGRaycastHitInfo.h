#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSGRaycastHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FCSGRaycastHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Position;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Normal;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Material;
    
    FSD_API FCSGRaycastHitInfo();
};

