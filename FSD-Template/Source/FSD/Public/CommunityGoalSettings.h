#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECommunityGoalIndex.h"
#include "CommunityGoalSettings.generated.h"

class UCommunityGoalFaction;
class UCommunityGoal;

UCLASS(BlueprintType)
class UCommunityGoalSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCommunityGoalFaction*> ActiveCommunityFactions;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCommunityGoal*> ActiveCommunityGoals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommunityGoal* DSMUGoal;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoal* GetGoal(ECommunityGoalIndex Goal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoal* FindGoal(const FString& Goal) const;
    
    UCommunityGoalSettings();
};

