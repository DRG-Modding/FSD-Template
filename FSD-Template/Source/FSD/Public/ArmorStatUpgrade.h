#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "ArmorStatUpgrade.generated.h"

class AActor;
class UPawnStat;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UArmorStatUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPawnStat* Stat;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedStatValue(AFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* NewStat);
    
    UArmorStatUpgrade();
};

