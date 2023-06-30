#pragma once
#include "CoreMinimal.h"
#include "WidgetMover.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FWidgetMover {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> Widget;
    
    FSD_API FWidgetMover();
};

