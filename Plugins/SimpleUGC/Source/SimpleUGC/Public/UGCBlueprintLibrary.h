#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGCBlueprintLibrary.generated.h"

class UUGCRegistry;
class UUGCSettings;
class UObject;
class UUGCLatentActionManager;

UCLASS(Blueprintable)
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

