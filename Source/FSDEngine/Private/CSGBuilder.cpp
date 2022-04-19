#include "CSGBuilder.h"
#include "CSGGroupComponent.h"

ACSGBuilder::ACSGBuilder() {
    this->CSGRoot = CreateDefaultSubobject<UCSGGroupComponent>(TEXT("CSGRoot"));
    this->CurrentRoot = NULL;
    this->CurrentPreviewRoot = NULL;
    this->CurrentPreviewConfig = NULL;
    this->PreviewScene = NULL;
}

