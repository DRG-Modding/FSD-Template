#include "DialogStruct.h"

FDialogStruct::FDialogStruct() {
    this->Enabled = false;
    this->Restriction = EDialogRestriction::None;
    this->Weigth = 0.00f;
    this->bIsValidEntry = false;
}

