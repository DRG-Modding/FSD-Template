#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameModeFunctionLibrary.generated.h"

class AFSDGameState;
class USeamlessTravelEventKey;
class UObject;
class AActor;

UCLASS(Blueprintable)
class UGameModeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameModeFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static bool IsCloseToImportantLocation(AFSDGameState* GameState, const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform FindRandomEscapePodLocation(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddSeamlessTravelEventKey(UObject* WorldContextObject, USeamlessTravelEventKey* Key);
    
};

