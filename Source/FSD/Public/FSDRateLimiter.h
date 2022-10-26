#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnOpenRateLimitDelegate.h"
#include "FSDRateLimiter.generated.h"

UCLASS(Blueprintable)
class FSD_API UFSDRateLimiter : public UObject {
    GENERATED_BODY()
public:
    UFSDRateLimiter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RateLimted();
    
    UFUNCTION(BlueprintCallable)
    void K2_Enqueue(FOnOpenRateLimit OnRateLimitOpen, const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueueEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueued(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 rateLimit, float rateTimeLimit, bool useBurstLimit, int32 burstLimit, float burstTimeLimit);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseLimitCounter();
    
};

