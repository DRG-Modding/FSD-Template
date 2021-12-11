#pragma once
#include "CoreMinimal.h"
#include "RichTextToken.h"
#include "RichTextParseResult.generated.h"

USTRUCT(BlueprintType)
struct FRichTextParseResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText SourceText;
    
    UPROPERTY(BlueprintReadOnly)
    FString UnformattedString;
    
    UPROPERTY(BlueprintReadOnly)
    int32 UnformattedLength;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRichTextToken> Tokens;
    
    FSD_API FRichTextParseResult();
};

