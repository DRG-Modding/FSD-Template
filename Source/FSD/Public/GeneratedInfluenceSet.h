#pragma once
#include "CoreMinimal.h"
#include "CaveInfluence.h"
#include "GeneratedInfluenceSet.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGeneratedInfluenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* CaveInfluencer;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NetworkID;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<FCaveInfluence> CaveInfluences;
    
    FSD_API FGeneratedInfluenceSet();
};

