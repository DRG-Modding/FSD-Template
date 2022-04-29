#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommunityReward.h"
#include "CommnuityRewardBundle.generated.h"

class UObject;

UCLASS(Blueprintable)
class UCommnuityRewardBundle : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityReward> Rewards;
    
public:
    UCommnuityRewardBundle();
    UFUNCTION(BlueprintCallable)
    void AwardRewards(UObject* WorldContext);
    
};

