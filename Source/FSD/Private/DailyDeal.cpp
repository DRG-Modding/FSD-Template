#include "DailyDeal.h"

FDailyDeal::FDailyDeal() {
    this->Resource = NULL;
    this->DealType = EDealType::Buy;
    this->ResourceAmount = 0;
    this->Credits = 0;
    this->ChangePercent = 0.00f;
}

