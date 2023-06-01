#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SpriteRect.h"
#include "SpriteRectWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpriteRectWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
public:
    USpriteRectWidget();
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector2D InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionAndSize(FVector2D InPosition, FVector2D InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector2D InPosition);
    
    UFUNCTION(BlueprintCallable)
    void Move(FVector2D InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSpriteRect GetSpriteRect() const;
    
};

