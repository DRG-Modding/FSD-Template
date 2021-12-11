#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GeneratedMissionGroup.h"
#include "MissionGenerationManager.generated.h"

class UGeneratedMission;

UCLASS(BlueprintType)
class UMissionGenerationManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<int32, FGeneratedMissionGroup> AllMissionGroups;
    
    UPROPERTY(EditAnywhere)
    bool ResetSelectedMission;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGeneratedMission*> GetMissions(int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGeneratedMission*> GetAvailableMissions();
    
    UMissionGenerationManager();
};

