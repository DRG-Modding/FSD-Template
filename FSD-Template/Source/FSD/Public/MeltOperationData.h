#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeltOperationData.generated.h"

USTRUCT(BlueprintType)
struct FMeltOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> Points;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSD_API FMeltOperationData();
};

