#pragma once
#include "CoreMinimal.h"
#include "WidgetFade.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FWidgetFade {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUserWidget> Widget;
    
    FSD_API FWidgetFade();
};

