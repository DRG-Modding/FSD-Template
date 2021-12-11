#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "TreasureFunctionLibrary.generated.h"

class UItemSkin;
class UObject;
class AProceduralSetup;
class UItemID;

UCLASS(BlueprintType)
class UTreasureFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool IsBoxInWall(UObject* WorldContextObject, AProceduralSetup* setup, float SizeX, float SizeY, float sizeZ, const FTransform& transorm);
    
    UFUNCTION(BlueprintCallable)
    static bool GiveSimilarSkin(UObject* WorldContextObject, UItemSkin* targetSkin, UItemID* targetItem, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem);
    
    UFUNCTION(BlueprintCallable)
    static void GiveRandomSkin(UObject* WorldContextObject, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem);
    
    UTreasureFunctionLibrary();
};

