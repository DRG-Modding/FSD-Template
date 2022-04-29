#pragma once
#include "CoreMinimal.h"
#include "WidgetTextCounter.generated.h"

class UTextBlock;

USTRUCT(BlueprintType)
struct FWidgetTextCounter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTextBlock> Widget;
    
    FSD_API FWidgetTextCounter();
};

