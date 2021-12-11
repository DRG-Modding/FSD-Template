#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFSDTargetPlatform.h"
#include "FrontendBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UFrontendBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void OpenURLInExternalBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDTargetPlatform FSDTargetPlatform();
    
    UFrontendBlueprintLibrary();
};

