#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GMMutatorItem.h"
#include "ObjectiveMissionIcon.h"
#include "EMissionStructure.h"
#include "GeneratedMission.generated.h"

class UMissionMutator;
class UBiome;
class UMissionTemplate;
class UObjective;
class UMissionWarning;
class ULevelSequence;
class UMutator;
class UMissionDNA;
class UMissionComplexity;
class UMissionDuration;
class AProceduralSetup;
class AFSDPlayerController;
class UGeneratedMission;

UCLASS(Blueprintable)
class FSD_API UGeneratedMission : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> SecondaryObjective;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMutator>, FGMMutatorItem> Mutators;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> MissionWarnings;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionMutator* MissionMutator;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionDuration* DurationLimit;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EMissionStructure MissionStructure;
    
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

