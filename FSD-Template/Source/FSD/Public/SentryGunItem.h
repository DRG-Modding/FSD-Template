#pragma once
#include "CoreMinimal.h"
#include "PlaceableItem.h"
#include "SentryGunItem.generated.h"

class UItemUpgrade;

UCLASS()
class ASentryGunItem : public APlaceableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UItemUpgrade*> upgrades;
    
public:
    ASentryGunItem();
};

