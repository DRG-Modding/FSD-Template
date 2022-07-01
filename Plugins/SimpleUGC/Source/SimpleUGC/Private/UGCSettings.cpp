#include "UGCSettings.h"

bool UUGCSettings::WriteToPlainText(const FString& Filename, const FString& TextContent, FText& OutError, bool Append) {
    return false;
}

void UUGCSettings::SetIconIndexOfSlot(int32 SlotNumber, int32 iconIndex) {
}

void UUGCSettings::SaveToSlot(int32 SlotNumber) {
}

void UUGCSettings::SaveToSelectedSlot() {
}

void UUGCSettings::ResetSlot() {
}

bool UUGCSettings::ReadFromPlainText(const FString& Filename, FString& OutTextContent) {
    return false;
}

bool UUGCSettings::LoadSlot(int32 SlotNumber) {
    return false;
}

TArray<FString> UUGCSettings::GetModNamesOfSlot(int32 SlotNumber, int32& outNumberOfUnknown) {
    return TArray<FString>();
}

TArray<FString> UUGCSettings::GetModIdsOfSlot(int32 SlotNumber) {
    return TArray<FString>();
}

int32 UUGCSettings::GetIconIndexOfSlot(int32 SlotNumber) {
    return 0;
}

bool UUGCSettings::DoesSlotContainMods(int32 SlotNumber) {
    return false;
}

void UUGCSettings::ClearSlot(int32 SlotNumber) {
}

void UUGCSettings::CleanupSlots() {
}

UUGCSettings::UUGCSettings() {
    this->slot1.AddDefaulted(5);
    this->slot1Icon = 0;
    this->slot2.AddDefaulted(24);
    this->slot2Icon = 9;
    this->slot3Icon = 0;
    this->slot4Icon = 0;
    this->SelectedSlot = 4;
}

