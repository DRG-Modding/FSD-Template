#pragma once
#include "CoreMinimal.h"
#include "WidgetPing.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FWidgetPing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> Widget;
    
    FSD_API FWidgetPing();
};

