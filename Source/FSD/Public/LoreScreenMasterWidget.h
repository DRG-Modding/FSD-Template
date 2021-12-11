#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "LoreScreenMasterWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class ULoreScreenMasterWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PageName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SolidImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> TransparentImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;
    
    ULoreScreenMasterWidget();
};

