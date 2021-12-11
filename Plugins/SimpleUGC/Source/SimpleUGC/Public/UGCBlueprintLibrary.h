#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGCBlueprintLibrary.generated.h"

class UUGCRegistry;
class UObject;

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
    
    UUGCBlueprintLibrary();
};

