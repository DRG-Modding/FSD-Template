#pragma once
#include "CoreMinimal.h"
#include "QueuedMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FQueuedMontage {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimMontage* Montage;
    
    UPROPERTY(Transient)
    bool ForceUpdate;
    
    FSD_API FQueuedMontage();
};

