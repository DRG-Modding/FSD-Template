#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Layout/Margin.h"
#include "Framework/Text/TextLayout.h"
#include "FSDLabelWidget.generated.h"

UCLASS(Blueprintable)
class UFSDLabelWidget : public UTextBlock {
    GENERATED_BODY()
public:
    UFSDLabelWidget();
    UFUNCTION(BlueprintCallable)
    void SetWrapTextAt(float WrapAt);
    
    UFUNCTION(BlueprintCallable)
    void SetWrappingPolicy(ETextWrappingPolicy Policy);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(FMargin NewMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFontSize() const;
    
};

