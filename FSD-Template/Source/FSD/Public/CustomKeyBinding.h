#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "CustomKeyBinding.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    FSD_API FCustomKeyBinding();
};

