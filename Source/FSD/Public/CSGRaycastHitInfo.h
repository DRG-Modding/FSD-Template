#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSGRaycastHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FCSGRaycastHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Material;
    
    FSD_API FCSGRaycastHitInfo();
};

