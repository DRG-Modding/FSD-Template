#include "SDFBuilder.h"
#include "SDFUnionOpComponent.h"

ASDFBuilder::ASDFBuilder() {
    this->PreviewSize = EPreviewCellSize::PRV_CELL_SIZE_50;
    this->CurrentRoot = NULL;
    this->SDFRoot = CreateDefaultSubobject<USDFUnionOpComponent>(TEXT("SDFRoot"));
}

