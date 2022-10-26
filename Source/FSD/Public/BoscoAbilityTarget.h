#pragma once
#include "CoreMinimal.h"
#include "BoscoAbilityTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBoscoAbilityTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FSD_API FBoscoAbilityTarget();
};

