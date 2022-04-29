#pragma once
#include "CoreMinimal.h"
#include "InputTranslationEntry.h"
#include "InputTranslation.generated.h"

USTRUCT(BlueprintType)
struct FInputTranslation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputTranslationEntry Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputTranslationEntry ControllerOverride;
    
    FSD_API FInputTranslation();
};

