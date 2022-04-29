#pragma once
#include "CoreMinimal.h"
#include "RichTextToken.h"
#include "RichTextParseResult.generated.h"

USTRUCT(BlueprintType)
struct FRichTextParseResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SourceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnformattedString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnformattedLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRichTextToken> Tokens;
    
    FSD_API FRichTextParseResult();
};

