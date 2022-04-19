#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomRichTextDecorator.h"
#include "RichTextInputDecorator.generated.h"

class URichTextInputWidget;

UCLASS(Abstract, HideDropdown)
class URichTextInputDecorator : public UCustomRichTextDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URichTextInputWidget> DecoratorWidgetClass;
    
public:
    URichTextInputDecorator();
};

