#include "AmmoCountWidget.h"

class AItem;




void UAmmoCountWidget::OnItemTotalChanged(int32 Value) {
}

void UAmmoCountWidget::OnItemEquipped(AItem* NewItem) {
}

void UAmmoCountWidget::OnItemAmountChanged(int32 Value) {
}



UAmmoCountWidget::UAmmoCountWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Character = NULL;
    this->Item = NULL;
    this->Aggregator = NULL;
    this->ShowClipAndTotalAsOne = false;
    this->CountThreshold = -1;
}

