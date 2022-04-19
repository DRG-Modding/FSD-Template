#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "TestAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTestAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsAlive;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float RandomStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float WalkCyclePlayRate;
    
    FSD_API FTestAnimInstanceProxy();
};

