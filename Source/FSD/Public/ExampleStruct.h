#pragma once
#include "CoreMinimal.h"
#include "ExampleStruct.generated.h"

USTRUCT(BlueprintType)
struct FExampleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Field;
    
    FSD_API FExampleStruct();
};

