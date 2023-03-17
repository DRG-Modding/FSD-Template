#include "DSTelemetry.h"

void UDSTelemetry::Terminate() {
}

bool UDSTelemetry::SubmitString(const FString& EventKey, const FString& EventData) {
    return false;
}

bool UDSTelemetry::SubmitSerialized(const FString& EventKey, const FString& EventData) {
    return false;
}

bool UDSTelemetry::SubmitJSONObject(const FString& EventKey, const UDJSONObject* EventData) {
    return false;
}

bool UDSTelemetry::SubmitJSONArray(const FString& EventKey, const UDJSONArray* EventData) {
    return false;
}

bool UDSTelemetry::SubmitInteger(const FString& EventKey, const int32 EventData) {
    return false;
}

bool UDSTelemetry::SubmitFloat(const FString& EventKey, const float EventData) {
    return false;
}

bool UDSTelemetry::SubmitEmpty(const FString& EventKey) {
    return false;
}

bool UDSTelemetry::SubmitBoolean(const FString& EventKey, const bool EventData) {
    return false;
}

bool UDSTelemetry::Start(const FString& GameId, const FString& BuildID) {
    return false;
}

bool UDSTelemetry::SetStateString(const FString& StateKey, const FString& StateData) {
    return false;
}

bool UDSTelemetry::SetStateSerialized(const FString& StateKey, const FString& StateData) {
    return false;
}

bool UDSTelemetry::SetStateJSONObject(const FString& StateKey, const UDJSONObject* StateData) {
    return false;
}

bool UDSTelemetry::SetStateJSONArray(const FString& StateKey, const UDJSONArray* StateData) {
    return false;
}

bool UDSTelemetry::SetStateInteger(const FString& StateKey, const int32 StateData) {
    return false;
}

bool UDSTelemetry::SetStateFloat(const FString& StateKey, const float StateData) {
    return false;
}

bool UDSTelemetry::SetStateEmpty(const FString& StateKey) {
    return false;
}

bool UDSTelemetry::SetStateBoolean(const FString& StateKey, const bool StateData) {
    return false;
}

bool UDSTelemetry::SetOnlinePlatformUserID(const FString& OnlinePlatformUserID) {
    return false;
}

bool UDSTelemetry::SetOnlinePlatformIdentifier(const FString& OnlinePlatformIdentifier) {
    return false;
}

void UDSTelemetry::Resume() {
}

void UDSTelemetry::Pause() {
}

bool UDSTelemetry::IsTerminated() const {
    return false;
}

bool UDSTelemetry::IsPaused() const {
    return false;
}

int64 UDSTelemetry::GetTelemetryInstanceID() const {
    return 0;
}

UDSTelemetry* UDSTelemetry::CreateTelemetry(UObject* WorldContextObject) {
    return NULL;
}

UDSTelemetry::UDSTelemetry() {
}

