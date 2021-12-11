#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlatformGunUpgrades.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "PlatformGunUpgrade.generated.h"

class AFSDPlayerState;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class UPlatformGunUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlatformGunUpgrades myUpgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EPlatformGunUpgrades aUpgradeType);
    
    UPlatformGunUpgrade();
};

