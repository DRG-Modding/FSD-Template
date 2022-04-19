#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "CustomKeyBinding.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    FSD_API FCustomKeyBinding();
};

