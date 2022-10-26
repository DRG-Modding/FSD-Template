#include "FSDRateLimiter.h"

bool UFSDRateLimiter::RateLimted() {
    return false;
}

void UFSDRateLimiter::K2_Enqueue(FOnOpenRateLimit OnRateLimitOpen, const FString& ID) {
}

bool UFSDRateLimiter::IsQueueEmpty() {
    return false;
}

bool UFSDRateLimiter::IsQueued(const FString& ID) {
    return false;
}

void UFSDRateLimiter::Init(int32 rateLimit, float rateTimeLimit, bool useBurstLimit, int32 burstLimit, float burstTimeLimit) {
}

void UFSDRateLimiter::IncreaseLimitCounter() {
}

UFSDRateLimiter::UFSDRateLimiter() {
}

