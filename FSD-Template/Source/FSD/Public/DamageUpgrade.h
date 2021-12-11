#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "EDamageUpgrade.h"
#include "EDamageComponentType.h"
#include "DamageUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UDamageUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDamageUpgrade upgradeType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDamageComponentType DamageComponentType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> RequiredClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EDamageUpgrade NewUpgradeType, EDamageComponentType NewDamageComponentType);
    
    UDamageUpgrade();
};

