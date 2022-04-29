#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GeneratedMissionGroup.h"
#include "MissionGenerationManager.generated.h"

class UGeneratedMission;

UCLASS(Blueprintable)
class FSD_API UMissionGenerationManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGeneratedMissionGroup> AllMissionGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetSelectedMission;
    
public:
    UMissionGenerationManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGeneratedMission*> GetMissions(int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGeneratedMission*> GetAvailableMissions();
    
};

