#pragma once
#include "CoreMinimal.h"
#include "WidgetTextCounter.generated.h"

class UTextBlock;

USTRUCT(BlueprintType)
struct FWidgetTextCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTextBlock> Widget;
    
    FSD_API FWidgetTextCounter();
};

