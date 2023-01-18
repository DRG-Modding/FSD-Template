#pragma once
#include "CoreMinimal.h"
#include "DynamicIcon.h"
#include "TextureDynamicIcon.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UTextureDynamicIcon : public UDynamicIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PreviewInstance;
    
public:
    UTextureDynamicIcon();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePreview();
    
};

