#pragma once
#include "CoreMinimal.h"
#include "TextCounterEntry.generated.h"

class UTextBlock;

USTRUCT(BlueprintType)
struct FTextCounterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FSD_API FTextCounterEntry();
};

