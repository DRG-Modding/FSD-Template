#pragma once
#include "CoreMinimal.h"
#include "DebrisInfluence.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDebrisInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CaveInfluencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSD_API FDebrisInfluence();
};

