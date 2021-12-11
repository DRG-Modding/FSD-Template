#pragma once
#include "CoreMinimal.h"
#include "ExposableFloat.generated.h"

USTRUCT(BlueprintType)
struct FExposableFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    bool Exposed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    FSD_API FExposableFloat();
};

