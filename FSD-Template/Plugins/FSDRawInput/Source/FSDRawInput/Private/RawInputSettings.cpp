#include "RawInputSettings.h"

URawInputSettings::URawInputSettings() {
    this->DeviceConfigurations.AddDefaulted(2);
    this->bRegisterDefaultDevice = true;
}

