#pragma once
#include "CoreMinimal.h"
#include "LockCounter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLockCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LockCount;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> LockedActor;
    
    FSD_API FLockCounter();
};

