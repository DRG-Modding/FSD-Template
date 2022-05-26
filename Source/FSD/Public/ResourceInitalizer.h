#pragma once
#include "CoreMinimal.h"
#include "ResourceInitalizer.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceInitalizer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAmount;
    
    FSD_API FResourceInitalizer();
};

