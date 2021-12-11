#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "TextStyleOverride.generated.h"

USTRUCT(BlueprintType)
struct FTextStyleOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bOverrideFont;
    
    UPROPERTY(EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY()
    bool bOverrideColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor Color;
    
    UPROPERTY()
    bool bOverrideSize;
    
    UPROPERTY(EditAnywhere)
    float SizeScale;
    
    FSD_API FTextStyleOverride();
};

