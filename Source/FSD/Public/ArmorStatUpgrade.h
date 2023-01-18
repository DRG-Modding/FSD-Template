#pragma once
#include "CoreMinimal.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "ArmorStatUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UPawnStat;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UArmorStatUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* Stat;
    
public:
    UArmorStatUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat);
    
};

