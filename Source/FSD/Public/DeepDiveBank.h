#pragma once
#include "CoreMinimal.h"
#include "DeepDiveBank.generated.h"

class UDeepDive;

USTRUCT(BlueprintType)
struct FDeepDiveBank {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UDeepDive* NormalDeepDive;
    
    UPROPERTY(Transient)
    UDeepDive* HardDeepDive;
    
    FSD_API FDeepDiveBank();
};

