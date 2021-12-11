#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MissionWarning.generated.h"

class UMutator;
class URunningMissionBP;
class UObjective;
class UMissionMutator;
class UMissionStat;
class UTexture2D;

UCLASS(BlueprintType)
class UMissionWarning : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<URunningMissionBP> MissionBP;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionMutator*> BannedMutators;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> Mutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(EditAnywhere)
    UMissionStat* MissionCompletedStat;
    
public:
    UMissionWarning();
};

