#pragma once
#include "CoreMinimal.h"
#include "ExposedProperty.h"
#include "ExposedFloat.generated.h"

USTRUCT(BlueprintType)
struct FExposedFloat : public FExposedProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    FSD_API FExposedFloat();
};

