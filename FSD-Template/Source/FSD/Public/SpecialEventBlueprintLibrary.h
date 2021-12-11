#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpecialEventBlueprintLibrary.generated.h"

class USchematic;
class UObject;

UCLASS(BlueprintType)
class USpecialEventBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static USchematic* TryGivePendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StorePendingReward(UObject* WorldContextObject, const TArray<USchematic*>& schematicsToChooseFrom);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetSpecialEventsRewardSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPendingReward(UObject* WorldContextObject);
    
    USpecialEventBlueprintLibrary();
};

