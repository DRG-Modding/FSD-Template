#include "CSGPreviewComponent.h"

UCSGPreviewComponent::UCSGPreviewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseBuilder = NULL;
    this->CurrentBakeConfig = NULL;
    this->UsePreviewScene = false;
    this->ChangeCount = 0;
}


