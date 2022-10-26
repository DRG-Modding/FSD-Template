#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GDKRateLimiter.generated.h"

class UFSDRateLimiter;

UCLASS(Blueprintable)
class UGDKRateLimiter : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDRateLimiter* Handler;
    
    UGDKRateLimiter();
};

