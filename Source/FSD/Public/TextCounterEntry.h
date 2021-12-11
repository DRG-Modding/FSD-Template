#pragma once
#include "CoreMinimal.h"
#include "TextCounterEntry.generated.h"

class UTextBlock;

USTRUCT(BlueprintType)
struct FTextCounterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    FSD_API FTextCounterEntry();
};

