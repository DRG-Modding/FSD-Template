#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BarleySpawnItem.h"
#include "RandInterval.h"
#include "DrinkSettings.generated.h"

class UObject;
class UResourceData;
class UDrinkableDataAsset;

UCLASS(BlueprintType)
class UDrinkSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBarleySpawnItem> BarleySpawns;
    
    UPROPERTY(EditAnywhere)
    FRandInterval BarleyAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> SpecialBeerUnlockCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UDrinkableDataAsset*> Drinkables;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UDrinkableDataAsset*> GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDrinkableDataAsset* GetBarDailySpecial(UObject* WorldContext);
    
    UDrinkSettings();
};

