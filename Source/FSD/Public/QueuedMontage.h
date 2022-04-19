#pragma once
#include "CoreMinimal.h"
#include "QueuedMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FQueuedMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool ForceUpdate;
    
    FSD_API FQueuedMontage();
};

