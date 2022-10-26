#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FSDXboxUtils.generated.h"

class UObject;

UCLASS(Blueprintable)
class UFSDXboxUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDXboxUtils();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowStoreUIForStoreItem(UObject* WorldContextObject, const FString& storeItemName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowStoreUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShowCheatTerminal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDCLCheckComplete(UObject* WorldContextObject);
    
};

