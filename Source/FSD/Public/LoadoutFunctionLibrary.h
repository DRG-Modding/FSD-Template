#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoadoutCopy.h"
#include "LoadoutFunctionLibrary.generated.h"

class APlayerCharacter;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class FSD_API ULoadoutFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULoadoutFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCurrLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, FLoadoutCopy newLoadout);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RandomizeWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeAllRandomWeaponLoadout(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLoadoutCopy GetCurrentLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyPasteWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
    
};

