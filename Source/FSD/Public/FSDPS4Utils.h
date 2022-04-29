#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDPS4Utils.generated.h"

UCLASS(Blueprintable)
class UFSDPS4Utils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDPS4Utils();
    UFUNCTION(BlueprintCallable)
    static void SetUGCAllowed(bool bAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUGCAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPS4SystemLoaded();
    
};

