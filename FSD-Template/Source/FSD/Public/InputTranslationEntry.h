#pragma once
#include "CoreMinimal.h"
#include "EInputInteraction.h"
#include "InputTranslationEntry.generated.h"

USTRUCT(BlueprintType)
struct FInputTranslationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EInputInteraction Interaction;
    
    UPROPERTY(EditAnywhere)
    FName InputName;
    
    UPROPERTY(EditAnywhere)
    int32 Axis;
    
    FSD_API FInputTranslationEntry();
};

