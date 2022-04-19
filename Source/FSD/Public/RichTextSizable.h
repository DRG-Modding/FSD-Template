#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "Styling/SlateColor.h"
#include "UObject/NoExportTypes.h"
#include "RichTextSizable.generated.h"

UCLASS()
class URichTextSizable : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideDefaultFontSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor OverrideDefaultFontColor;
    
public:
    URichTextSizable();
protected:
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontSize(int32 inFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontColor(const FLinearColor& InColor);
    
};

