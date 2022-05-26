#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "HUDWarningWidget.generated.h"

class USoundBase;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UHUDWarningWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UHUDWarningWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(UTexture2D* Texture, USoundBase* PingSound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ping(bool DestroyAfterPing);
    
};

