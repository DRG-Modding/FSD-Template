#pragma once
#include "CoreMinimal.h"
#include "LockCounter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLockCounter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 LockCount;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LockedActor;
    
    FSD_API FLockCounter();
};

