#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESchematicType.h"
#include "ForgingPendingReward.h"
#include "ForgingResult.h"
#include "ForgingFunctionLibrary.generated.h"

class UObject;
class USchematic;

UCLASS(Blueprintable)
class UForgingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UForgingFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USchematic* PickForgingMasteryDefaultReward(UObject* WorldContextObject, ESchematicType InType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FForgingResult GiveForgingXP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<USchematic*> GetOwnedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetForgingPendingMasteryRewardNewest(UObject* WorldContextObject, bool& OutSuccess, FForgingPendingReward& OutReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESchematicType GetForgingMasteryRewardType(UObject* WorldContextObject, int32 Level, bool ReturnDefaultIfUnavailable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESchematicType GetForgingMasteryRewardDefaultType(ESchematicType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetForgingLevelProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetForgingLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetForgingHasPendingMasteryRewards(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<USchematic*> GetForgedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClaimForgingPendingMasteryReward(UObject* WorldContextObject, int32 Level, USchematic* Reward);
    
};

