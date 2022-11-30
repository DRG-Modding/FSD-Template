#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoscoAbilityTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBoscoAbilityTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FSD_API FBoscoAbilityTarget();
};

