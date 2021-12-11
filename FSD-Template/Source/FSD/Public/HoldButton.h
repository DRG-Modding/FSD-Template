#pragma once
#include "CoreMinimal.h"
#include "HoldButton.generated.h"

USTRUCT(BlueprintType)
struct FHoldButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText HoldingText;
    
    UPROPERTY(EditAnywhere)
    float HoldStartTime;
    
    UPROPERTY(EditAnywhere)
    float HoldDuration;
    
public:
    FSD_API FHoldButton();
};

