#include "DJSONObject.h"

UDJSONObject* UDJSONObject::CreateJSONObject(UObject* WorldContextObject) {
    return NULL;
}

bool UDJSONObject::Clear() {
    return false;
}

FString UDJSONObject::AsString() const {
    return TEXT("");
}

bool UDJSONObject::AddStringField(const FString& Key, const FString& Value) {
    return false;
}

bool UDJSONObject::AddStringArrayField(const FString& Key, const TArray<FString>& Value) {
    return false;
}

bool UDJSONObject::AddJSONObjectField(const FString& Key, const UDJSONObject* Value) {
    return false;
}

bool UDJSONObject::AddJSONObjectArrayField(const FString& Key, const TArray<UDJSONObject*>& Value) {
    return false;
}

bool UDJSONObject::AddJSONArrayField(const FString& Key, const UDJSONArray* Value) {
    return false;
}

bool UDJSONObject::AddJSONArrayArrayField(const FString& Key, const TArray<UDJSONArray*>& Value) {
    return false;
}

bool UDJSONObject::AddIntegerField(const FString& Key, const int32 Value) {
    return false;
}

bool UDJSONObject::AddIntegerArrayField(const FString& Key, const TArray<int32>& Value) {
    return false;
}

bool UDJSONObject::AddFloatField(const FString& Key, const float Value) {
    return false;
}

bool UDJSONObject::AddFloatArrayField(const FString& Key, const TArray<float>& Value) {
    return false;
}

bool UDJSONObject::AddEmptyField(const FString& Key) {
    return false;
}

bool UDJSONObject::AddBooleanField(const FString& Key, const bool Value) {
    return false;
}

bool UDJSONObject::AddBooleanArrayField(const FString& Key, const TArray<bool>& Value) {
    return false;
}

UDJSONObject::UDJSONObject() {
}

