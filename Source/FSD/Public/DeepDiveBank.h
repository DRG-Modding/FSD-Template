#pragma once
#include "CoreMinimal.h"
#include "DeepDiveBank.generated.h"

class UDeepDive;

USTRUCT(BlueprintType)
struct FDeepDiveBank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeepDive* NormalDeepDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeepDive* HardDeepDive;
    
    FSD_API FDeepDiveBank();
};

