#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "TextStyleOverride.generated.h"

USTRUCT(BlueprintType)
struct FTextStyleOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOverrideFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOverrideSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeScale;
    
    FSD_API FTextStyleOverride();
};

