#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPickaxePartLocation.h"
#include "PickaxeSet.h"
#include "PickaxeFunctionLibrary.generated.h"

class UItemID;
class UObject;
class UPickaxePart;

UCLASS(Blueprintable)
class UPickaxeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPickaxeFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GivePickaxePart(UObject* WorldContextObject, UPickaxePart* part);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UPickaxePart*> GetUnlockedPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UPickaxePart*> GetPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsPickAxePartAcquired(UObject* WorldContextObject, const UPickaxePart* InPickaxePart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPickaxeSet GetEquippedPickaxeSet(UObject* WorldContextObject, UItemID* pickaxeID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPickaxePart* GetEquippedPickaxePart(UObject* WorldContextObject, EPickaxePartLocation partLocation, UItemID* pickaxeID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation partLocation, UItemID* pickaxeID);
    
};

