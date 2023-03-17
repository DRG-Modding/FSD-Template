#include "PickaxePreviewActor.h"
#include "Components/SceneComponent.h"

void APickaxePreviewActor::PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart) {
}

void APickaxePreviewActor::EquipParts() {
}

APickaxePreviewActor::APickaxePreviewActor() {
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_RootComponent"));
    this->ItemID = NULL;
    this->EquippedMaterial = NULL;
}

