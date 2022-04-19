#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "CustomRichTextDecorator.generated.h"

class URichTextBlock;

UCLASS(Abstract, BlueprintType, HideDropdown)
class UCustomRichTextDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock;
    
public:
    UCustomRichTextDecorator();
};

