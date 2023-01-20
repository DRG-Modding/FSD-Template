#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RoomNode.h"
#include "Templates/SubclassOf.h"
#include "ProceduralFunctionLibrary.generated.h"

class AProceduralSetup;
class UBiome;
class UDebrisPositioning;
class UFXSystemAsset;
class UObject;
class UObjective;

UCLASS(Blueprintable)
class UProceduralFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProceduralFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnTerrainImpact(UObject* WorldContextObject, UFXSystemAsset* particle, const FVector& Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AProceduralSetup* GetProceduralSetup(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveXP(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveCredits(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBiome* GetBiome(TSubclassOf<AProceduralSetup> levelSetup);
    
    UFUNCTION(BlueprintCallable)
    static void CreateEntrances(AProceduralSetup* pls, UPARAM(Ref) FRoomNode& Room, int32 exitCount, int32 entranceCount, UDebrisPositioning* exitPositioning, UDebrisPositioning* entrancePositioning);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool AllControllersFinishedTransitionToPlay(UObject* WorldContextObject);
    
};

