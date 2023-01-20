#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESchematicType.h"
#include "SpecialEventBlueprintLibrary.generated.h"

class UObject;
class UPlayerCharacterID;
class USchematic;

UCLASS(Blueprintable)
class USpecialEventBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpecialEventBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USchematic* TryGivePendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StorePendingReward(UObject* WorldContextObject, const TArray<USchematic*>& schematicsToChooseFrom);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasPendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<USchematic*> GetSpecialEventsRewardSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USchematic* FindRandomSchematicForCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, ESchematicType SchematicType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearPendingReward(UObject* WorldContextObject);
    
};

