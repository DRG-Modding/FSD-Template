#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClaimableRewardEntry.h"
#include "PromotionRewardsLibrary.generated.h"

class UObject;
class APlayerController;

UCLASS(BlueprintType)
class UPromotionRewardsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromotionRewardsLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion);
    
};

