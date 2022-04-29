#pragma once
#include "CoreMinimal.h"
#include "WidgetPing.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FWidgetPing {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UWidget> Widget;
    
    FSD_API FWidgetPing();
};

