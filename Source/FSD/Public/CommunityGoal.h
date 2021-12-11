#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ECommunityGoalTier.h"
#include "ECommunityGoalType.h"
#include "CommunityGoal.generated.h"

class UObject;
class UCommunityGoalCategory;
class UCommnuityRewardSetup;

UCLASS(BlueprintType)
class UCommunityGoal : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool TierValuesAreInitialized;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Active;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MetaDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommunityGoalCategory* Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECommunityGoalType CommunityGoalType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GoalPerMemberTier1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GoalPerMemberTier2;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GoalPerMemberTier3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommnuityRewardSetup* RewardSetup;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TotalTierProgress(float Value, int32 Members);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TierValue(ECommunityGoalTier Tier, float Value, int32 Members);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TierProgress(ECommunityGoalTier Tier, float Value, int32 Members);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TierGoal(ECommunityGoalTier Tier, int32 Members);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 RewardTier(float Value, int32 Members);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IncrementGoal(UObject* WorldContext, float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GoalToText(ECommunityGoalType StatType, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCategoryTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreTiersInitialized() const;
    
    UCommunityGoal();
};

