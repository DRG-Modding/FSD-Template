#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YesNoPromptSettings.generated.h"

class UYesNoPromptWidget;

USTRUCT(BlueprintType)
struct FYesNoPromptSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UYesNoPromptWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Message;
    
    FSD_API FYesNoPromptSettings();
};

