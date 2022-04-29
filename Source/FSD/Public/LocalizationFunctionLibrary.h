#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalizedLanguageInfo.h"
#include "LocalizationFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ULocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizationFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
    
};

