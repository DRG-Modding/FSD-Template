#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeltOperationData.generated.h"

USTRUCT(BlueprintType)
struct FMeltOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSD_API FMeltOperationData();
};

