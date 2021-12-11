#include "DailyDealSettings.h"

class UObject;

bool UDailyDealSettings::IsDailyDealBought(UObject* WorldContextObject) {
    return false;
}

int32 UDailyDealSettings::GetDailyDealSeed() {
    return 0;
}

void UDailyDealSettings::GetDailyDeal(FDailyDeal& outDeal) {
}

bool UDailyDealSettings::CanAffordDailyDeal(UObject* WorldContextObject) {
    return false;
}

bool UDailyDealSettings::BuyDailyDeal(UObject* WorldContextObject) {
    return false;
}

UDailyDealSettings::UDailyDealSettings() {
}

