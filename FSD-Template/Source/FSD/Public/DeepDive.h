#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeepDiveRewardItem.h"
#include "DeepDive.generated.h"

class UBiome;
class UGeneratedMission;
class UDeepDiveTemplate;

UCLASS(BlueprintType)
class UDeepDive : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UGeneratedMission*> missions;
    
    UPROPERTY(BlueprintReadOnly)
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FDeepDiveRewardItem> GivenRewards;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MissionsCompleted;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> StagesCompleted;
    
    UPROPERTY()
    int32 CurrentMissionIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDiveTemplate* Template;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText DeepDiveName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 BestTime;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedStage(int32 stageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDeepDiveRewardItem GetGivenRewardAtStage(int32 stageIndex);
    
    UDeepDive();
};

