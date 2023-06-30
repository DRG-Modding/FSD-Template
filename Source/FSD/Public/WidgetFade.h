#pragma once
#include "CoreMinimal.h"
#include "WidgetFade.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FWidgetFade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> Widget;
    
    FSD_API FWidgetFade();
};

