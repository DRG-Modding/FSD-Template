#include "UGCSettings.h"

bool UUGCSettings::WriteToPlainText(const FString& Filename, const FString& TextContent, FText& OutError, bool Append) {
    return false;
}

void UUGCSettings::SetNoSlotSelected() {
}

void UUGCSettings::SaveToSlot(int32 slotNumber) {
}

void UUGCSettings::ResetSlot() {
}

bool UUGCSettings::ReadFromPlainText(const FString& Filename, FString& OutTextContent) {
    return false;
}

bool UUGCSettings::LoadSlot(int32 slotNumber) {
    return false;
}

TArray<FString> UUGCSettings::GetModNamesOfSlot(int32 slotNumber, int32& outNumberOfUnknown) {
    return TArray<FString>();
}

TArray<FString> UUGCSettings::GetModIdsOfSlot(int32 slotNumber) {
    return TArray<FString>();
}

bool UUGCSettings::DoesSlotContainMods(int32 slotNumber) {
    return false;
}

int32 UUGCSettings::DetectSelectedSlot() {
    return 0;
}

void UUGCSettings::CleanupSlots() {
}

UUGCSettings::UUGCSettings() {
    this->SelectedSlot = 0;
}

