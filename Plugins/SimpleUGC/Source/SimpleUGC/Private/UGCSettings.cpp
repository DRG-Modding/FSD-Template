#include "UGCSettings.h"

bool UUGCSettings::WriteToPlainText(const FString& Filename, const FString& TextContent, FText& OutError, bool Append) {
    return false;
}

void UUGCSettings::SetIconIndexOfSlot(int32 slotNumber, int32 iconIndex) {
}

void UUGCSettings::SaveToSlot(int32 slotNumber) {
}

void UUGCSettings::SaveToSelectedSlot() {
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

int32 UUGCSettings::GetIconIndexOfSlot(int32 slotNumber) {
    return 0;
}

bool UUGCSettings::DoesSlotContainMods(int32 slotNumber) {
    return false;
}

void UUGCSettings::CleanupSlots() {
}

UUGCSettings::UUGCSettings() {
    this->slot1Icon = 0;
    this->slot2Icon = 0;
    this->slot3Icon = 0;
    this->slot4Icon = 0;
    this->SelectedSlot = 1;
}

