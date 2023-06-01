#include "SkinEffect.h"

void USkinEffect::Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson) const {
}

EItemSkinType USkinEffect::GetSkinType() const {
    return EItemSkinType::PaintJob;
}

USkinEffect::USkinEffect() {
}

