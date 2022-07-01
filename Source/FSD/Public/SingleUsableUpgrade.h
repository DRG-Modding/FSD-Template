#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESingleUsableUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "SingleUsableUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USingleUsableUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESingleUsableUpgradeType upgradeType;
    
public:
    USingleUsableUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> subItem, AFSDPlayerState* Player, ESingleUsableUpgradeType NewUpgradeType);
    
};

