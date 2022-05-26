#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "ELineCutterUpgradeType.h"
#include "UpgradeValues.h"
#include "LineCutterUpgrade.generated.h"

class AFSDPlayerState;
class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULineCutterUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELineCutterUpgradeType upgradeType;
    
public:
    ULineCutterUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterUpgradeType NewUpgradeType);
    
};

