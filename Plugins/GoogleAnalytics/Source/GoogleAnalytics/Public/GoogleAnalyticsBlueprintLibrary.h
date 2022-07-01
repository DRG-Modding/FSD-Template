#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomMetric.h"
#include "CustomDimension.h"
#include "GoogleAnalyticsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class GOOGLEANALYTICS_API UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGoogleAnalyticsBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetTrackingId(const FString& TrackingId);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnonymizeIP(const bool Anonymize);
    
    UFUNCTION(BlueprintCallable)
    static void RecordGoogleUserTiming(const FString& TimingCategory, const int32 TimingValue, const FString& TimingName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    
    UFUNCTION(BlueprintCallable)
    static void RecordGoogleSocialInteraction(const FString& SocialNetwork, const FString& SocialAction, const FString& SocialTarget, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    
    UFUNCTION(BlueprintCallable)
    static void RecordGoogleScreen(const FString& ScreenName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    
    UFUNCTION(BlueprintCallable)
    static void RecordGoogleEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTrackingId();
    
};

