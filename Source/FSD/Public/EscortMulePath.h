#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EscortMulePath.generated.h"

USTRUCT(BlueprintType)
struct FEscortMulePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> Path;
    
    FSD_API FEscortMulePath();
};

