#pragma once
#include "CoreMinimal.h"
#include "InputTranslationEntry.h"
#include "InputTranslation.generated.h"

USTRUCT(BlueprintType)
struct FInputTranslation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInputTranslationEntry Default;
    
    UPROPERTY()
    bool bControllerOverride;
    
    UPROPERTY(EditAnywhere)
    FInputTranslationEntry ControllerOverride;
    
    FSD_API FInputTranslation();
};

