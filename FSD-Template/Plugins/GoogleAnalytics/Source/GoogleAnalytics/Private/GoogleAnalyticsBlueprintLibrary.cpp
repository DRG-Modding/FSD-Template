#include "GoogleAnalyticsBlueprintLibrary.h"

void UGoogleAnalyticsBlueprintLibrary::SetTrackingId(const FString& TrackingId) {
}

void UGoogleAnalyticsBlueprintLibrary::SetAnonymizeIP(const bool Anonymize) {
}

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleUserTiming(const FString& TimingCategory, const int32 TimingValue, const FString& TimingName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics) {
}

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleSocialInteraction(const FString& SocialNetwork, const FString& SocialAction, const FString& SocialTarget, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics) {
}

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleScreen(const FString& ScreenName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics) {
}

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics) {
}

FString UGoogleAnalyticsBlueprintLibrary::GetTrackingId() {
    return TEXT("");
}

UGoogleAnalyticsBlueprintLibrary::UGoogleAnalyticsBlueprintLibrary() {
}

