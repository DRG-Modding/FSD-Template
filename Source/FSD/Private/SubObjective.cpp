#include "SubObjective.h"

FSubObjective::FSubObjective() {
    this->OnProgressShout = NULL;
    this->OnCompletedShout = NULL;
    this->Required = 0;
    this->count = 0;
}

