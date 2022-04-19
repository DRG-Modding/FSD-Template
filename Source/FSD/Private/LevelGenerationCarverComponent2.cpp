#include "LevelGenerationCarverComponent2.h"

ULevelGenerationCarverComponent2::ULevelGenerationCarverComponent2() {
    this->Carver = NULL;
    this->CarvingDisabled = false;
    this->PreviewSeed = 0;
    this->SelfActivate = false;
    this->PreviewComponent = NULL;
}

