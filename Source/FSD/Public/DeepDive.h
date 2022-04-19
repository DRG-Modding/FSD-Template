#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeepDiveRewardItem.h"
#include "DeepDive.generated.h"

class UGeneratedMission;
class UBiome;
class UDeepDiveTemplate;

UCLASS(BlueprintType)
class UDeepDive : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UGeneratedMission*> missions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FDeepDiveRewardItem> GivenRewards;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MissionsCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> StagesCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CurrentMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDeepDiveTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText DeepDiveName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 BestTime;
    
    UDeepDive();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedStage(int32 stageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDeepDiveRewardItem GetGivenRewardAtStage(int32 stageIndex);
    
};

