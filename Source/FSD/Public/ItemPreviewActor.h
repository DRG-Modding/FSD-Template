#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IconGeneratable.h"
#include "Skinnable.h"
#include "Templates/SubclassOf.h"
#include "ItemPreviewActor.generated.h"

class UIconGenerationCameraKey;
class UItemSkin;
class USkinEffect;

UCLASS(Blueprintable)
class AItemPreviewActor : public AActor, public ISkinnable, public IIconGeneratable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* CurrentSkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* CurrentSkinMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> itemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconGenerationCameraKey* CameraKey_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIconGenerationCameraKey* CameraKey_CloseUp;
    
public:
    AItemPreviewActor();
    UFUNCTION(BlueprintCallable)
    void SkinItem(USkinEffect* Skin);
    
    UFUNCTION(BlueprintCallable)
    void SetItemClass(TSubclassOf<AActor> NewItemClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSkinPreviewChanged(UItemSkin* PreviewSkin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkinItem(USkinEffect* Skin);
    
    UFUNCTION(BlueprintCallable)
    void OnSkinChanged();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkin(UItemSkin* skinMesh, UItemSkin* skinColor, bool isPreview);
    
    
    // Fix for true pure virtual functions not being implemented
};

