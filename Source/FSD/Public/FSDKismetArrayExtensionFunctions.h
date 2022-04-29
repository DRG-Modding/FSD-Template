#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetArrayLibrary.h"
#include "FSDKismetArrayExtensionFunctions.generated.h"

UCLASS(Blueprintable)
class UFSDKismetArrayExtensionFunctions : public UKismetArrayLibrary {
    GENERATED_BODY()
public:
    UFSDKismetArrayExtensionFunctions();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
    
};

