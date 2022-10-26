#include "MessagingSubSystem.h"

FString UMessagingSubSystem::MessageSenderIdAsString(const FFSDChatMessage& Msg) {
    return TEXT("");
}

float UMessagingSubSystem::MessageAge(const FFSDChatMessage& Msg) {
    return 0.0f;
}

void UMessagingSubSystem::LatestMessages(int32 Num, bool resetAge, TArray<FFSDChatMessage>& OutMessages) {
}

void UMessagingSubSystem::ClearMessages() {
}

UMessagingSubSystem::UMessagingSubSystem() {
}

