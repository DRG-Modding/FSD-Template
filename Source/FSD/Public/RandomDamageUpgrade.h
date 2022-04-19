#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "RandRange.h"
#include "UpgradeValues.h"
#include "RandomDamageUpgrade.generated.h"

class AFSDPlayerState;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class URandomDamageUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange DamageRange;
    
public:
    URandomDamageUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player);
    
};

