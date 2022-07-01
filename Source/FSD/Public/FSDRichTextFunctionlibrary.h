#pragma once
#include "CoreMinimal.h"
#include "RichTextParseResult.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDRichTextFunctionlibrary.generated.h"

UCLASS(Blueprintable)
class UFSDRichTextFunctionlibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDRichTextFunctionlibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SplitRichText(const FRichTextParseResult& Parser, int32 SplitIndex, bool bKeepLeftFormatting, bool bKeepRightFormatting, FText& OutLeftText, FText& OutRightText);
    
    UFUNCTION(BlueprintCallable)
    static FRichTextParseResult ParseRichText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MidRichText(const FRichTextParseResult& Parser, int32 StartIndex, int32 count, bool bKeepFormatting);
    
};

