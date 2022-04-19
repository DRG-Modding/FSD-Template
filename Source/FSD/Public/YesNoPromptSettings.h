#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YesNoPromptSettings.generated.h"

class UYesNoPromptWidget;

USTRUCT(BlueprintType)
struct FYesNoPromptSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYesNoPromptWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    FSD_API FYesNoPromptSettings();
};

