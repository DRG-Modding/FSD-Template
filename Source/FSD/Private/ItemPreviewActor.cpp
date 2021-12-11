#include "ItemPreviewActor.h"
#include "Templates/SubclassOf.h"

class USkinEffect;
class AActor;
class UItemSkin;

void AItemPreviewActor::SkinItem(USkinEffect* Skin) {
}

void AItemPreviewActor::SetItemClass(TSubclassOf<AActor> NewItemClass) {
}

void AItemPreviewActor::OnSkinPreviewChanged(UItemSkin* PreviewSkin) {
}

void AItemPreviewActor::OnSkinItem_Implementation(USkinEffect* Skin) {
}

void AItemPreviewActor::OnSkinChanged() {
}

void AItemPreviewActor::ChangeSkin(UItemSkin* skinMesh, UItemSkin* skinColor, bool isPreview) {
}

AItemPreviewActor::AItemPreviewActor() {
    this->CurrentSkinColor = NULL;
    this->CurrentSkinMesh = NULL;
    this->itemClass = NULL;
    this->CameraKey_Normal = NULL;
    this->CameraKey_CloseUp = NULL;
}

