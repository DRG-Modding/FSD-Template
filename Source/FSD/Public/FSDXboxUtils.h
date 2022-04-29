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
    UFUNCTION(BlueprintCallable)
    static void ShowStoreUIForStoreItem(UObject* WorldContextObject, const FString& storeItemName);
    
    UFUNCTION(BlueprintCallable)
    static void ShowStoreUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShowCheatTerminal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDCLCheckComplete(UObject* WorldContextObject);
    
};

