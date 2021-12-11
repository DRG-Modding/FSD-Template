#pragma once
#include "CoreMinimal.h"
#include "CaveInfluence.h"
#include "GeneratedInfluenceSet.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGeneratedInfluenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UObject* CaveInfluencer;
    
    UPROPERTY(Transient)
    int32 NetworkID;
    
    UPROPERTY(Transient)
    TArray<FCaveInfluence> CaveInfluences;
    
    FSD_API FGeneratedInfluenceSet();
};

