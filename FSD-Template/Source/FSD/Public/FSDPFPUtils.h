#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDPFPUtils.generated.h"

UCLASS(BlueprintType)
class UFSDPFPUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayfabLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayfabUserId();
    
    UFSDPFPUtils();
};

