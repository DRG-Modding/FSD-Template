#pragma once
#include "CoreMinimal.h"
#include "SplineTrailMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSplineTrailMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName slotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    FSD_API FSplineTrailMaterial();
};

