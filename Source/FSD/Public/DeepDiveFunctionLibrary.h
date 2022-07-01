#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeepDiveFunctionLibrary.generated.h"

class UObject;
class UGeneratedMission;
class UDeepDive;
class UDeepDiveTemplate;

UCLASS(Blueprintable)
class UDeepDiveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDeepDiveFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEliteDeepDiveMission(UObject* WorldContextObject, UGeneratedMission* mission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEliteDeepDive(UObject* WorldContextObject, UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDeepDive* GetDeepDiveFromMission(UObject* WorldContextObject, const UGeneratedMission* mission);
    
};

