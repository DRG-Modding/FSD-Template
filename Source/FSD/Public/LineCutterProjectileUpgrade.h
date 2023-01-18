#pragma once
#include "CoreMinimal.h"
#include "ELineCutterProjectileUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "LineCutterProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULineCutterProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELineCutterProjectileUpgradeType upgradeType;
    
public:
    ULineCutterProjectileUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterProjectileUpgradeType NewUpgradeType);
    
};

