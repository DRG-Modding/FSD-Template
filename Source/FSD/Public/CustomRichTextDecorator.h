#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "CustomRichTextDecorator.generated.h"

class URichTextBlock;

UCLASS(Abstract, Blueprintable, HideDropdown)
class UCustomRichTextDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock;
    
public:
    UCustomRichTextDecorator();
};

