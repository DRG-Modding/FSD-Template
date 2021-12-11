#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GMMutatorItem.h"
#include "EMissionStructure.h"
#include "ObjectiveMissionIcon.h"
#include "GeneratedMission.generated.h"

class UMutator;
class UGeneratedMission;
class UBiome;
class UMissionTemplate;
class UObjective;
class UMissionWarning;
class UMissionMutator;
class UMissionComplexity;
class UMissionDuration;
class UMissionDNA;
class ULevelSequence;
class AProceduralSetup;
class AFSDPlayerController;

UCLASS(Blueprintable)
class UGeneratedMission : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Seed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GlobalSeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText MissionName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UObjective> SecondaryObjective;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<TSubclassOf<UMutator>, FGMMutatorItem> Mutators;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UMissionWarning*> MissionWarnings;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionMutator* MissionMutator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionDuration* DurationLimit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EMissionStructure MissionStructure;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LoaderLevelSequence;
    
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
    
    UGeneratedMission();
};

