#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFSDTargetPlatform.h"
#include "FrontendBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UFrontendBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFrontendBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void OpenURLInExternalBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable)
    static void GetStringFromClipboard(FString& fromClipboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDTargetPlatformIsXSX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDTargetPlatform FSDTargetPlatform();
    
    UFUNCTION(BlueprintCallable)
    static void CopyStringToClipboard(const FString& toClipboard);
    
};

