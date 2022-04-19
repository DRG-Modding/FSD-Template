#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RewardClaimedDelegate.h"
#include "SeasonLevel.h"
#include "SeasonLevelWidget.generated.h"

UCLASS(EditInlineNew)
class USeasonLevelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRewardClaimed OnRewardClaimed;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SeasonLevel;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsNormalClaimed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsSpecialClaimed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsLastInRow;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSeasonLevel LevelInfo;
    
public:
    USeasonLevelWidget();
    UFUNCTION(BlueprintCallable)
    bool TryClaimReward(bool isNormalReward);
    
    UFUNCTION(BlueprintCallable)
    void SetData(int32 inLevel, bool inLastInRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataSet();
    
};

