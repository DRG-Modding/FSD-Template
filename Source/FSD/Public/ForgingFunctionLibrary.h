#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESchematicType.h"
#include "ForgingFunctionLibrary.generated.h"

class USchematic;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FForgingFunctionLibraryIsLargerThan, const USchematic*, Schematic1, const USchematic*, Schematic2, bool&, FirstIsLarger);

UCLASS(BlueprintType)
class UForgingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static USchematic* GiveForginMasteryReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GiveForgingXP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetOwnedSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const FForgingFunctionLibraryIsLargerThan& IsLargerThan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetOwnedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESchematicType GetNextForgingMasterRewardType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetForgingXP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetForgingLevelProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetForgingLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetForgedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetAllSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const FForgingFunctionLibraryIsLargerThan& IsLargerThan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USchematic*> GetAllSchematics(UObject* WorldContextObject);
    
    UForgingFunctionLibrary();
};

