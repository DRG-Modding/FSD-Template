#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VanityMasterySettings.h"
#include "VanityMasterySave.h"
#include "VanityMasteryResult.h"
#include "CraftingCost.h"
#include "VanityMasteryLibrary.generated.h"

class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UVanityMasteryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVanityMasteryLibrary();
    UFUNCTION(BlueprintCallable)
    static void ResetVanityMasteryXP(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void MarkFashionitesAwardedForOldPurchasesSeen(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVanityMasterySettings GetVanityMasterySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVanityMasterySave GetVanityMasterySave(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVanityMasteryFashioniteForLevel(int32 InCurrentLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFashionitesAwaredForOldPurchases(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVanityMasteryLevelProgress(int32 Level, int32 XP);
    
    UFUNCTION(BlueprintCallable)
    static FVanityMasteryResult AddVanityMasteryXPFromCost(UObject* WorldContext, TArray<FCraftingCost> Cost, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    static FVanityMasteryResult AddVanityMasteryXP(UObject* WorldContext, int32 XP, UPlayerCharacterID* PlayerId);
    
};

