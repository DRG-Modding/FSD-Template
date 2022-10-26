#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECommunityGoalIndex.h"
#include "CommunityGoalSettings.generated.h"

class UCommunityGoalFaction;
class UCommunityGoal;

UCLASS(Blueprintable)
class UCommunityGoalSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommunityGoalFaction*> ActiveCommunityFactions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommunityGoal*> ActiveCommunityGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityGoal* DSMUGoal;
    
public:
    UCommunityGoalSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoal* GetGoal(ECommunityGoalIndex Goal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoal* FindGoal(const FString& Goal) const;
    
};

