#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetArrayLibrary.h"
#include "FSDKismetArrayExtensionFunctions.generated.h"

UCLASS()
class UFSDKismetArrayExtensionFunctions : public UKismetArrayLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
    
    UFSDKismetArrayExtensionFunctions();
};

