#include "EffectSettings.h"

bool UEffectSettings::NeedsShadeGeneration() const {
    return false;
}

void UEffectSettings::MarkShadersGenerated() {
}

void UEffectSettings::CompileShaders() {
}

UEffectSettings::UEffectSettings() {
    this->NiagaraParameterCollection = NULL;
}

