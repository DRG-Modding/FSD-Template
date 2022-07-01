#pragma once
#include "CoreMinimal.h"
#include "ECommunityGoalType.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ECommunityGoalTier.h"
#include "CommunityGoal.generated.h"

class UCommnuityRewardSetup;
class UCommunityGoalCategory;
class UObject;

UCLASS(Blueprintable)
class UCommunityGoal : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TierValuesAreInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MetaDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityGoalCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommunityGoalType CommunityGoalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GoalPerMemberTier1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GoalPerMemberTier2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GoalPerMemberTier3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommnuityRewardSetup* RewardSetup;
    
public:
    UCommunityGoal();
protected:
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
    
};

