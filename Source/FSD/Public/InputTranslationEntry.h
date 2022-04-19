#pragma once
#include "CoreMinimal.h"
#include "EInputInteraction.h"
#include "InputTranslationEntry.generated.h"

USTRUCT(BlueprintType)
struct FInputTranslationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputInteraction Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Axis;
    
    FSD_API FInputTranslationEntry();
};

