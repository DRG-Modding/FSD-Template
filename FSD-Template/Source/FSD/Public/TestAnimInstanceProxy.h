#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "TestAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTestAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsAlive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RandomStartPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float WalkCyclePlayRate;
    
    FSD_API FTestAnimInstanceProxy();
};

