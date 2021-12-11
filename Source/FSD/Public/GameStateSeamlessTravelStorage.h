#pragma once
#include "CoreMinimal.h"
#include "GameStateSeamlessTravelStorage.generated.h"

class UDifficultySetting;
class UPlayer;
class UResourceData;

USTRUCT(BlueprintType)
struct FGameStateSeamlessTravelStorage {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UDifficultySetting* ChosenDifficulty;
    
    UPROPERTY(Transient)
    TMap<UPlayer*, bool> PlayerShouldStartInMedbay;
    
    UPROPERTY(Transient)
    TMap<UResourceData*, float> Resources;
    
    UPROPERTY(Transient)
    float MissionTime;
    
    UPROPERTY(Transient)
    TMap<FName, float> StoredFloatValues;
    
    UPROPERTY(Transient)
    TMap<FName, int32> StoredIntValues;
    
    FSD_API FGameStateSeamlessTravelStorage();
};

