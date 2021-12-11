#pragma once
#include "CoreMinimal.h"
#include "EMissionStructure.h"
#include "GeneratedMissionSeed.generated.h"

class UBiome;
class UMissionTemplate;
class UFSDEvent;
class UMissionComplexity;
class UMissionDuration;
class UMissionWarning;
class UMissionMutator;

USTRUCT(BlueprintType)
struct FGeneratedMissionSeed {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Seed;
    
    UPROPERTY(Transient)
    int32 GlobalSeed;
    
    UPROPERTY(Transient)
    UBiome* Biome;
    
    UPROPERTY(Transient)
    UMissionTemplate* Template;
    
    UPROPERTY(Transient)
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(Transient)
    UMissionDuration* DurationLimit;
    
    UPROPERTY(Transient)
    UMissionMutator* Mutator;
    
    UPROPERTY(Transient)
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(Transient)
    TArray<UFSDEvent*> ActiveEvents;
    
    UPROPERTY(Transient)
    EMissionStructure MissionStructure;
    
    FSD_API FGeneratedMissionSeed();
};

