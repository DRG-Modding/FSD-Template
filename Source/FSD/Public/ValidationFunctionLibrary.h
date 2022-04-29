#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ValidationFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class FSD_API UValidationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UValidationFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetSelectedAssets(TArray<FString> Paths);
    
};

