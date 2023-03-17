#include "DJSONArray.h"

UDJSONArray* UDJSONArray::CreateJSONArray(UObject* WorldContextObject) {
    return NULL;
}

bool UDJSONArray::Clear() {
    return false;
}

FString UDJSONArray::AsString() const {
    return TEXT("");
}

bool UDJSONArray::AddStringItem(const FString& Item) {
    return false;
}

bool UDJSONArray::AddStringArrayItem(const TArray<FString>& Item) {
    return false;
}

bool UDJSONArray::AddJSONObjectItem(const UDJSONObject* Item) {
    return false;
}

bool UDJSONArray::AddJSONObjectArrayItem(const TArray<UDJSONObject*>& Item) {
    return false;
}

bool UDJSONArray::AddJSONArrayItem(const UDJSONArray* Item) {
    return false;
}

bool UDJSONArray::AddJSONArrayArrayItem(const TArray<UDJSONArray*>& Item) {
    return false;
}

bool UDJSONArray::AddIntegerItem(const int32 Item) {
    return false;
}

bool UDJSONArray::AddIntegerArrayItem(const TArray<int32>& Item) {
    return false;
}

bool UDJSONArray::AddFloatItem(const float Item) {
    return false;
}

bool UDJSONArray::AddFloatArrayItem(const TArray<float>& Item) {
    return false;
}

bool UDJSONArray::AddEmptyItem() {
    return false;
}

bool UDJSONArray::AddBooleanItem(const bool Item) {
    return false;
}

bool UDJSONArray::AddBooleanArrayItem(const TArray<bool>& Item) {
    return false;
}

UDJSONArray::UDJSONArray() {
}

