#include "ModioModInfoWrapper.h"

bool UModioModInfoWrapper::IsModIdInvalid() {
    return false;
}

UModioModInfoWrapper::UModioModInfoWrapper() {
    this->Status = EUGCApprovalStatus::Fully;
}

