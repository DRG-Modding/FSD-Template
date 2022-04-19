#include "BakeConfig.h"

class UBuilderBase;

FVector UBakeConfig::GetVectorSetting(FName Name, FVector defaultVal) {
    return FVector{};
}

FRandomStream UBakeConfig::GetRandomStream() {
    return FRandomStream{};
}

UBuilderBase* UBakeConfig::GetObject(FName Name) {
    return NULL;
}

int32 UBakeConfig::GetIntSetting(FName Name, int32 defaultVal) {
    return 0;
}

float UBakeConfig::GetFloatSetting(FName Name, float defaultVal) {
    return 0.0f;
}

bool UBakeConfig::GetBoolSetting(FName Name, bool defaultVal) {
    return false;
}

UBakeConfig::UBakeConfig() {
}

