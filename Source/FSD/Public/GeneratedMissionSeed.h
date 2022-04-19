#pragma once
#include "CoreMinimal.h"
#include "EMissionStructure.h"
#include "GeneratedMissionSeed.generated.h"

class UBiome;
class UMissionTemplate;
class UMissionWarning;
class UMissionComplexity;
class UMissionDuration;
class UFSDEvent;
class UMissionMutator;

USTRUCT(BlueprintType)
struct FGeneratedMissionSeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionDuration* DurationLimit;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMissionMutator* Mutator;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFSDEvent*> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EMissionStructure MissionStructure;
    
    FSD_API FGeneratedMissionSeed();
};

