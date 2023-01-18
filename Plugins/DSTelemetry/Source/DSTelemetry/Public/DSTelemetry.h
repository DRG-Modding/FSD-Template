#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DSTelemetry.generated.h"

class UDJSONArray;
class UDJSONObject;
class UDSTelemetry;

UCLASS(Blueprintable)
class DSTELEMETRY_API UDSTelemetry : public UObject {
    GENERATED_BODY()
public:
    UDSTelemetry();
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    bool SubmitString(const FString& EventKey, const FString& EventData);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitSerialized(const FString& EventKey, const FString& EventData);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitJSONObject(const FString& EventKey, const UDJSONObject* EventData);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitJSONArray(const FString& EventKey, const UDJSONArray* EventData);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitInteger(const FString& EventKey, const int32 EventData);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitFloat(const FString& EventKey, const float EventData);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitEmpty(const FString& EventKey);
    
    UFUNCTION(BlueprintCallable)
    bool SubmitBoolean(const FString& EventKey, const bool EventData);
    
    UFUNCTION(BlueprintCallable)
    bool Start(const FString& GameId, const FString& BuildID);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateString(const FString& StateKey, const FString& StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateSerialized(const FString& StateKey, const FString& StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateJSONObject(const FString& StateKey, const UDJSONObject* StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateJSONArray(const FString& StateKey, const UDJSONArray* StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateInteger(const FString& StateKey, const int32 StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateFloat(const FString& StateKey, const float StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateEmpty(const FString& StateKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateBoolean(const FString& StateKey, const bool StateData);
    
    UFUNCTION(BlueprintCallable)
    bool SetOnlinePlatformUserID(const FString& OnlinePlatformUserID);
    
    UFUNCTION(BlueprintCallable)
    bool SetOnlinePlatformIdentifier(const FString& OnlinePlatformIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTerminated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetTelemetryInstanceID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDSTelemetry* CreateTelemetry(UObject* WorldContextObject);
    
};

