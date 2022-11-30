#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeepDiveFunctionLibrary.generated.h"

class UGeneratedMission;
class UDeepDive;
class UObject;
class UDeepDiveTemplate;

UCLASS(Blueprintable)
class UDeepDiveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDeepDiveFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEliteDeepDiveMission(UObject* WorldContextObject, UGeneratedMission* mission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEliteDeepDive(UObject* WorldContextObject, UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDeepDive* GetDeepDiveFromMission(UObject* WorldContextObject, const UGeneratedMission* mission);
    
};

