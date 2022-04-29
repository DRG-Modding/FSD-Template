#pragma once
#include "CoreMinimal.h"
#include "HUDVisibilityRegisteredWidget.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FHUDVisibilityRegisteredWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UWidget> Widget;
    
    FSD_API FHUDVisibilityRegisteredWidget();
};

