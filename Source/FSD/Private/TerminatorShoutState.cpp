#include "TerminatorShoutState.h"

FTerminatorShoutState::FTerminatorShoutState() {
    this->Loop = false;
    this->MaxRandomShoutDelay = 0.00f;
    this->MinRandomShoutDelay = 0.00f;
    this->Interruptable = false;
    this->PreventSubsequentDuplicate = false;
}

