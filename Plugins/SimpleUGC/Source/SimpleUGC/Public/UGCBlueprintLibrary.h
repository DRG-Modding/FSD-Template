#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGCBlueprintLibrary.generated.h"

class UUGCSettings;
class UObject;
class UUGCRegistry;
class UUGCLatentActionManager;

UCLASS(Blueprintable)
class SIMPLEUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUGCBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUGCSettings* GetUGCSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUGCLatentActionManager* GetUGCLatentActionManager(UObject* WorldContextObject);
    
};

