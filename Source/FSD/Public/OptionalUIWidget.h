#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "OptionalUIWidget.generated.h"

class UOptionalUICategory;

UCLASS(Abstract, EditInlineNew)
class UOptionalUIWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionalUICategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility VisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HiddenFlag;
    
public:
    UOptionalUIWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible);
    
};

