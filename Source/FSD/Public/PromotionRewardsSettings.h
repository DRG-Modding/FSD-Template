#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ClaimableRewardEntry.h"
#include "PromotionRewardsSettings.generated.h"

UCLASS(Blueprintable)
class UPromotionRewardsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> FirstPromotionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> SubsequentPromotionRewards;
    
    UPromotionRewardsSettings();
};

