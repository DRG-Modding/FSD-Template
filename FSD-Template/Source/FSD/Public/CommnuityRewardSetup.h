#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommnuityRewardSetup.generated.h"

class UObject;
class UCommnuityRewardBundle;
class UResourceData;

UCLASS(BlueprintType)
class UCommnuityRewardSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCommnuityRewardBundle*> TierRewards;
    
public:
    UFUNCTION(BlueprintCallable)
    TMap<UResourceData*, int32> GetResourcesTierOnlyReward(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    TMap<UResourceData*, int32> GetResourcesReward(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    void AwardTierRewards(UObject* WorldContext, int32 Tier);
    
    UCommnuityRewardSetup();
};

