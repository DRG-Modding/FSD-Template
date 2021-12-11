#pragma once
#include "CoreMinimal.h"
#include "RichTextToken.generated.h"

USTRUCT(BlueprintType)
struct FRichTextToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Tag;
    
    UPROPERTY(BlueprintReadOnly)
    FString Text;
    
    FSD_API FRichTextToken();
};

