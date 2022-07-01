#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClaimableRewardEntry.h"
#include "PromotionRewardsLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UPromotionRewardsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromotionRewardsLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ClaimPromotionRewards(UObject* WorldContext, APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion);
    
};

