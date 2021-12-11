#pragma once
#include "CoreMinimal.h"
#include "ExampleStruct.generated.h"

USTRUCT()
struct FExampleStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Field;
    
    FSD_API FExampleStruct();
};

