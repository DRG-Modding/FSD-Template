#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PLSTester.generated.h"

class UMissionComplexity;
class UMissionDuration;
class UDifficultySetting;
class UMissionWarning;
class UMissionMutator;
class UBiome;
class UMissionTemplate;

UCLASS()
class APLSTester : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 PLSSeed;
    
    UPROPERTY(EditAnywhere)
    int32 MissionSeed;
    
    UPROPERTY(EditAnywhere)
    int32 GlobalSeed;
    
    UPROPERTY(EditAnywhere)
    int32 GlobalMissionIndex;
    
    UPROPERTY(EditAnywhere)
    UMissionComplexity* limitComplexity;
    
    UPROPERTY(EditAnywhere)
    UMissionDuration* limitDuration;
    
    UPROPERTY(EditAnywhere)
    UMissionMutator* Mutator;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(EditAnywhere)
    UBiome* Biome;
    
    UPROPERTY(EditAnywhere)
    UMissionTemplate* MissionTemplate;
    
    UPROPERTY(EditAnywhere, Instanced)
    UMissionTemplate* CustomMissionTemplate;
    
    UPROPERTY(EditAnywhere)
    UDifficultySetting* OverrideDifficulty;
    
    UPROPERTY(EditAnywhere)
    int32 SimulatePlayerCount;
    
    UPROPERTY(EditAnywhere)
    FText CustomMissionName;
    
public:
    APLSTester();
};

