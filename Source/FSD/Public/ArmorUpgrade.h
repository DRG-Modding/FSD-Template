#pragma once
#include "CoreMinimal.h"
#include "EArmorUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "ArmorUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UArmorUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorUpgradeType upgradeType;
    
public:
    UArmorUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, EArmorUpgradeType aUpgradeType);
    
};

