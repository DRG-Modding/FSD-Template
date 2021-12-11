#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalizedLanguageInfo.h"
#include "LocalizationFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class ULocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
    
    ULocalizationFunctionLibrary();
};

