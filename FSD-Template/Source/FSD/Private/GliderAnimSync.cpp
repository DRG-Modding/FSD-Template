#include "GliderAnimSync.h"

FGliderAnimSync::FGliderAnimSync() {
    this->Time = 0.00f;
    this->AnimAlphaSync = 0.00f;
    this->DownUpBlendBool = false;
    this->RightLeftBlendBool = false;
    this->VerticalAddBlend = 0.00f;
    this->HorizontalAddBlend = 0.00f;
}

