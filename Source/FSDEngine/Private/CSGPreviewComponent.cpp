#include "CSGPreviewComponent.h"

UCSGPreviewComponent::UCSGPreviewComponent() {
    this->BaseBuilder = NULL;
    this->CurrentBakeConfig = NULL;
    this->UsePreviewScene = false;
    this->ChangeCount = 0;
}

