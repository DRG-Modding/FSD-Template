#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGCBlueprintLibrary.generated.h"

class UObject;
class UUGCSettings;
class UUGCRegistry;
class UUGCLatentActionManager;

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUGCBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCSettings* GetUGCSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCLatentActionManager* GetUGCLatentActionManager(UObject* WorldContextObject);
    
};

