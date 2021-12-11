#pragma once
#include "CoreMinimal.h"
#include "AttackerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAttackerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> Attacker;
    
    UPROPERTY(Transient)
    int32 PositionIndex;
    
    UPROPERTY(Transient)
    float AttackerRadius;
    
    FSD_API FAttackerInfo();
};

