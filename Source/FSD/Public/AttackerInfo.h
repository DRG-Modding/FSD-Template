#pragma once
#include "CoreMinimal.h"
#include "AttackerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAttackerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Attacker;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 PositionIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float AttackerRadius;
    
    FSD_API FAttackerInfo();
};

