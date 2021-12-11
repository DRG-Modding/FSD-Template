#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDLevelLoadingPersistentWidget.generated.h"

class UTexture;

UCLASS(Abstract, EditInlineNew)
class UFSDLevelLoadingPersistentWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFadeProgress(float Fade, bool ToSpaceRig, UTexture* loadingImage);
    
    UFSDLevelLoadingPersistentWidget();
};

