#pragma once
#include "CoreMinimal.h"
#include "EThawInputDirection.h"
#include "InputDirectionSet.generated.h"

USTRUCT(BlueprintType)
struct FInputDirectionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EThawInputDirection> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSubsequentDuplicates;
    
    FSD_API FInputDirectionSet();
};

