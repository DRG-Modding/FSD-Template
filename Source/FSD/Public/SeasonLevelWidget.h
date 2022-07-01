#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RewardClaimedDelegate.h"
#include "SeasonLevel.h"
#include "SeasonLevelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USeasonLevelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardClaimed OnRewardClaimed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeasonLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNormalClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSpecialClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLastInRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

