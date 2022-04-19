#include "EscortMuleExtractorSlot.h"

FEscortMuleExtractorSlot::FEscortMuleExtractorSlot() {
    this->ExtractorState = EEscortExtractorState::ReadyToGrab;
    this->LastState = EEscortExtractorState::ReadyToGrab;
    this->AttachPoint = NULL;
    this->Usable = NULL;
    this->Widget = NULL;
}

