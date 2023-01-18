#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommnuityRewardSetup.generated.h"

class UCommnuityRewardBundle;
class UObject;
class UResourceData;

UCLASS(Blueprintable)
class UCommnuityRewardSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommnuityRewardBundle*> TierRewards;
    
public:
    UCommnuityRewardSetup();
    UFUNCTION(BlueprintCallable)
    TMap<UResourceData*, int32> GetResourcesTierOnlyReward(int32 Tier);
    
    UFUNCTION(BlueprintCallable)
    TMap<UResourceData*, int32> GetResourcesReward(int32 Tier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void AwardTierRewards(UObject* WorldContext, int32 Tier);
    
};

