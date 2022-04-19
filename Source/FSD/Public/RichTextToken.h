#pragma once
#include "CoreMinimal.h"
#include "RichTextToken.generated.h"

USTRUCT(BlueprintType)
struct FRichTextToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FSD_API FRichTextToken();
};

