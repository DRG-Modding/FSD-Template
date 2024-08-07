#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GeneratedMissionGroup.h"
#include "GlobalMissionSeed.h"
#include "MissionSetKey.h"
#include "MissionGenerationManager.generated.h"

class UGeneratedMission;

UCLASS(Blueprintable)
class FSD_API UMissionGenerationManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMissionSetKey, FGeneratedMissionGroup> AllMissionGroups;
    
public:
    UMissionGenerationManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGeneratedMission*> GetMissions(const FGlobalMissionSeed& Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetMissionFromSeeds(const FGlobalMissionSeed& GlobalSeed, int32 MissionSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGeneratedMission*> GetAvailableMissions();
    
};

