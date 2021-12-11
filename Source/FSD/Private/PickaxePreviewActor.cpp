#include "PickaxePreviewActor.h"

class UPickaxePart;

void APickaxePreviewActor::PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart) {
}

void APickaxePreviewActor::EquipParts() {
}

APickaxePreviewActor::APickaxePreviewActor() {
    this->ItemID = NULL;
    this->EquippedMaterial = NULL;
}

