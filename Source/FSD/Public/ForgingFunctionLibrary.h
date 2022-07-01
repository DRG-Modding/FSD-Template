#pragma once
#include "CoreMinimal.h"
#include "ESchematicType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ForgingPendingReward.h"
#include "ForgingResult.h"
#include "ForgingFunctionLibrary.generated.h"

class USchematic;
class UObject;

UCLASS(Blueprintable)
class UForgingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UForgingFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USchematic* PickForgingMasteryDefaultReward(UObject* WorldContextObject, ESchematicType InType);
    
    UFUNCTION(BlueprintCallable)
    static FForgingResult GiveForgingXP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetOwnedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetForgingPendingMasteryRewardNewest(UObject* WorldContextObject, bool& OutSuccess, FForgingPendingReward& OutReward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESchematicType GetForgingMasteryRewardType(UObject* WorldContextObject, int32 Level, bool ReturnDefaultIfUnavailable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESchematicType GetForgingMasteryRewardDefaultType(ESchematicType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetForgingLevelProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetForgingLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetForgingHasPendingMasteryRewards(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetForgedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClaimForgingPendingMasteryReward(UObject* WorldContextObject, int32 Level, USchematic* Reward);
    
};

