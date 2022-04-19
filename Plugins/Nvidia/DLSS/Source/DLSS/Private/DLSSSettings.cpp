#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = true;
    this->bEnableDLSSInEditorViewports = false;
    this->bEnableScreenpercentageManipulationInDLSSEditorViewports = false;
    this->bEnableDLSSInPlayInEditorViewports = true;
    this->bShowDLSSSDebugOnScreenMessages = true;
    this->bGenericDLSSBinaryExists = false;
    this->NVIDIANGXApplicationId = 0;
    this->bCustomDLSSBinaryExists = false;
}

