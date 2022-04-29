#pragma once
#include "CoreMinimal.h"
#include "WidgetMover.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FWidgetMover {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UWidget> Widget;
    
    FSD_API FWidgetMover();
};

