#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Skinnable.h"
#include "IconGeneratable.h"
#include "ItemPreviewActor.generated.h"

class USkinEffect;
class UItemSkin;
class UIconGenerationCameraKey;

UCLASS()
class AItemPreviewActor : public AActor, public ISkinnable, public IIconGeneratable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UItemSkin* CurrentSkinColor;
    
    UPROPERTY(Transient)
    UItemSkin* CurrentSkinMesh;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TSubclassOf<AActor> itemClass;
    
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey_Normal;
    
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey_CloseUp;
    
public:
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
    
public:
    AItemPreviewActor();
    
    // Fix for true pure virtual functions not being implemented
};

