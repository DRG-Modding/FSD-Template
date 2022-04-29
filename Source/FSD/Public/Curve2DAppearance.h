#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curve2DAppearance.generated.h"

USTRUCT(BlueprintType)
struct FCurve2DAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    UPROPERTY(EditAnywhere)
    float OutlineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineTint;
    
    FSD_API FCurve2DAppearance();
};

