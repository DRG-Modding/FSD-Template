#include "DialogDataAsset.h"

class UObject;

int32 UDialogDataAsset::SelectIndex(UObject* WorldContext) {
    return 0;
}

bool UDialogDataAsset::SelectEntry(UObject* WorldContext, FDialogStruct& Dialog) {
    return false;
}

FDialogStruct UDialogDataAsset::GetShout(int32 Index) const {
    return FDialogStruct{};
}

UDialogDataAsset::UDialogDataAsset() {
    this->Enabled = true;
    this->AudioOnly = false;
    this->SelectUsingWeight = false;
    this->ShoutDelay = 0.00f;
    this->ShoutCoolDown = 2.00f;
    this->ShoutChance = 1.00f;
}

