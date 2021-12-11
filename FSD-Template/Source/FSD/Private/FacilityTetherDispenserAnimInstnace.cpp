#include "FacilityTetherDispenserAnimInstnace.h"

UFacilityTetherDispenserAnimInstnace::UFacilityTetherDispenserAnimInstnace() {
    this->PodState = EHackingPodState::EClosed;
    this->ShouldShowDispenser = false;
    this->ShouldCloseFromDispenser = false;
    this->ShouldShowButton = false;
    this->ShouldHideButton = false;
}

