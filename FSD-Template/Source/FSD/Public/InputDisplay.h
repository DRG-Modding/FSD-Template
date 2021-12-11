#pragma once
#include "CoreMinimal.h"
#include "EInputInteraction.h"
#include "UObject/NoExportTypes.h"
#include "InputDisplay.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInputDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInputInteraction Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InputText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IconTintable;
    
    FSD_API FInputDisplay();
};

