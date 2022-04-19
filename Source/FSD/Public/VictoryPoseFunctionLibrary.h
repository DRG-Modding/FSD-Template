#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VictoryPoseFunctionLibrary.generated.h"

class UObject;
class UVictoryPose;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UVictoryPoseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVictoryPoseFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRandomVictoryPose(UVictoryPose* VictoryPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UVictoryPose*> GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVictoryPose* GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
};

