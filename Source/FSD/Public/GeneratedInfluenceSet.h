#pragma once
#include "CoreMinimal.h"
#include "CaveInfluence.h"
#include "GeneratedInfluenceSet.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGeneratedInfluenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* CaveInfluencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NetworkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCaveInfluence> CaveInfluences;
    
    FSD_API FGeneratedInfluenceSet();
};

