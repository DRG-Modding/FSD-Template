#pragma once
#include "CoreMinimal.h"
#include "DebrisInfluence.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDebrisInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* CaveInfluencer;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSD_API FDebrisInfluence();
};

