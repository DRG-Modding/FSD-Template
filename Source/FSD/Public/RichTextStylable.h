#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "TextStyleOverride.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "RichTextStylable.generated.h"

UCLASS()
class URichTextStylable : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(EditAnywhere)
    FSlateColor FontColor;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FTextStyleOverride> Styles;
    
public:
    URichTextStylable();
};

