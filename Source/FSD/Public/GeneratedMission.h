#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMissionStructure.h"
#include "GMMutatorItem.h"
#include "ObjectiveMissionIcon.h"
#include "Templates/SubclassOf.h"
#include "GeneratedMission.generated.h"

class AFSDPlayerController;
class AProceduralSetup;
class UBiome;
class UGeneratedMission;
class ULevelSequence;
class UMissionComplexity;
class UMissionDNA;
class UMissionDuration;
class UMissionMutator;
class UMissionTemplate;
class UMissionWarning;
class UMutator;
class UObjective;

UCLASS(Blueprintable)
class FSD_API UGeneratedMission : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> SecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMutator>, FGMMutatorItem> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> MissionWarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionMutator* MissionMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionDuration* DurationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMissionStructure MissionStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInSeasonEventZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LoaderLevelSequence;
    
public:
    UGeneratedMission();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_SetupPLS(AProceduralSetup* pls);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSingleMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlagueMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeepDive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetSecondaryObjectiveIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AProceduralSetup> GetPLS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionDNA* GetMissionDNA() const;
    
    UFUNCTION(BlueprintCallable)
    AProceduralSetup* CreatePLS(int32 NewSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreMissionsEqual(UGeneratedMission* Other) const;
    
};

