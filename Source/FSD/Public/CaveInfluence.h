#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CaveInfluence.generated.h"

USTRUCT()
struct FCaveInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    float range;
    
    FSD_API FCaveInfluence();
};

