#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CaveInfluence.generated.h"

USTRUCT(BlueprintType)
struct FCaveInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float range;
    
    FSD_API FCaveInfluence();
};

