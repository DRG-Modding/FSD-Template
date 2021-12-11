#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELineCutterProjectileUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "LineCutterProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class ULineCutterProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELineCutterProjectileUpgradeType upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterProjectileUpgradeType NewUpgradeType);
    
    ULineCutterProjectileUpgrade();
};

