#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "PlayerAfflictionOverlayWidget.generated.h"

class UPlayerAfflictionOverlay;
class UTexture2D;

UCLASS(EditInlineNew)
class UPlayerAfflictionOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bOverlayActive;
    
    UPROPERTY(BlueprintReadOnly)
    UPlayerAfflictionOverlay* Overlay;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndOverlay();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlay(UPlayerAfflictionOverlay* InOverlay);
    
    UPlayerAfflictionOverlayWidget();
};

