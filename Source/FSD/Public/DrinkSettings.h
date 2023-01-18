#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BarleySpawnItem.h"
#include "RandInterval.h"
#include "DrinkSettings.generated.h"

class UDrinkableDataAsset;
class UObject;
class UResourceData;

UCLASS(Blueprintable)
class UDrinkSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBarleySpawnItem> BarleySpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval BarleyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, int32> SpecialBeerUnlockCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDrinkableDataAsset*> Drinkables;
    
    UDrinkSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UDrinkableDataAsset*> GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UDrinkableDataAsset* GetBarDailySpecial(UObject* WorldContext, UDrinkableDataAsset* currentDailySpecial);
    
};

