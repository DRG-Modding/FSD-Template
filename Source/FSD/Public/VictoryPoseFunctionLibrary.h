#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VictoryPoseFunctionLibrary.generated.h"

class UVictoryPose;
class UObject;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UVictoryPoseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRandomVictoryPose(UVictoryPose* VictoryPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UVictoryPose*> GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVictoryPose* GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UVictoryPoseFunctionLibrary();
};

